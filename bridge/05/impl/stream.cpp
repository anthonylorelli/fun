#include "stream.h"

using namespace Bridge::impl;

Stream::Stream(std::wostream& out) :
    m_out{out} { }

void Stream::Write(const std::wstring& message)
{
    m_out << message;
}
