#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
void main()
{
	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyNIU::MyForm MyForm;
	Application::Run(% MyForm);
}

//array<String^>^ args