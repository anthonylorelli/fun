#pragma once

#include <iostream>
#include <string>

namespace Bridge
{
    class Message
    {
    public:
        Message();
        void Write(const std::wstring& msg);

    private:
        std::wostream& m_out;
    };
}