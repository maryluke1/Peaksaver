#pragma once

using namespace System;

public ref class HelperClass
{
public:
    // Constructor
    HelperClass();

    // Getter for ConString
    property String^ ConString
    {
        String^ get();
        void set(String^ value);
    }

private:
    String^ conString; // Private member variable
};