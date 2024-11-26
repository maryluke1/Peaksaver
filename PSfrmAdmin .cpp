#include "PSfrmAdmin .h"

using namespace System;
using namespace PeakSaver; // Include this to reference the PeakSaver namespace

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew PSfrmAdmin());  // Correctly referencing the Admin form
    return 0;
}

