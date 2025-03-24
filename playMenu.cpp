#include "playMenu.h"
#include "aQuesy2.h"
#include "StartForm2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Крабик::StartForm2 form;
	Application::Run(% form);

}