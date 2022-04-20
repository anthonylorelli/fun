#include "message.h"

using namespace Bridge;

Message::Message() : m_out(std::wcout) {}

void Message::Write(const std::wstring& msg)
{
    m_out << msg;
}