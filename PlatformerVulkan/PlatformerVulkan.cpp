#include "DrawVulkan.h"
#include "destroy.h"

initVK init;

int main()
{
	inputTexture();
	createWindow();
	init.InitVulkan();
	loop();
	destroy();
}