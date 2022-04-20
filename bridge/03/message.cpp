#include "message.h"

#include <iostream>

namespace Bridge::impl
{
    class Message
    {
    public:
        Message() : m_out{std::wcout} {}

        void Write(const std::wstring& msg)
        {
            m_out << msg;

        }

    private:
        std::wostream& m_out;
    };
}

using namespace Bridge;

void Message::Write(const std::wstring& msg)
{
    m_impl.Write(msg);
}