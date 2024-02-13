#include "ofMain.h"
#include "application.h"

//========================================================================
int main( ){

	//Use ofGLFWWindowSettings for more options like multi-monitor fullscreen
	ofGLWindowSettings settings;
	settings.setSize(1024, 768);
	settings.windowMode = OF_WINDOW; //can also be OF_FULLSCREEN
	settings.setGLVersion(4, 6);

	auto window = ofCreateWindow(settings);

	ofRunApp(window, make_shared<Application>());
	ofRunMainLoop();

}
