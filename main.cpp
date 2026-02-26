#include "app.h"

int main(int argc, char* argv[])
{
	App app;

	app.Init();
	app.Run();
	app.Quit();

	return 0;
}