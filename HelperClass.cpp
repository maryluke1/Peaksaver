#include "HelperClass.h"

// Constructor
HelperClass::HelperClass()
{
    conString = "Data Source=LAPTOP-KI49TH6A\\SQLEXPRESS;Initial Catalog=PeakSaver;User ID=sa;Password=Ejaz123456;Encrypt=False";
}

// Getter
String^ HelperClass::ConString::get()
{
    return conString;
}

// Setter
void HelperClass::ConString::set(String^ value)
{
    conString = value;
}
