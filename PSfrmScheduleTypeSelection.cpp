#include "PSfrmScheduleTypeSelection.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PeakSaver::PSfrmScheduleTypeSelection  form;
	Application::Run(% form);
}

