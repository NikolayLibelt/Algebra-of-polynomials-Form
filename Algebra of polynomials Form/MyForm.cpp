#include "Myform.h"


using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);
	AlgebraofpolynomialsForm::MyForm form;
	Application::Run(% form);
}