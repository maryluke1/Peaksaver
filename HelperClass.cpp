#include "HelperClass.h"
// Constructor
HelperClass::HelperClass()
{
    conString = "Data Source = DESKTOP-80K9IE5\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True";
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