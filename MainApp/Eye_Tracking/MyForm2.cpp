
#include "MyForm2.h"
//#include "stdafx.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace EyeTracking;

[STAThreadAttribute]

void MainForm2(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm2 form;
	Application::Run(%form);
}
