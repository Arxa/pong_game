// VirtualTennisAdvanced.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "IntroMenu.h"

using namespace VirtualTennisAdvanced;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew IntroMenu());
	return 0;
}
