#include "PSfrmLogin.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	projectofsre::PSfrmLogin form;
	Application::Run(% form);
}
