#include "console.h"

#include <iostream>

using namespace Bridge::impl;

void Console::Write(const std::wstring& message)
{
    std::wcout << message;
}