#include "calculate.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CALCULATE::calculate form; //WinFormsTest - ��� ������ �������
	Application::Run(% form);
	return 0;
}

