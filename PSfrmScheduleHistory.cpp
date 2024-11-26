#include "PSfrmScheduleHistory.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	historyform::PSfrmScheduleHistory form;
	Application::Run(% form);
}
