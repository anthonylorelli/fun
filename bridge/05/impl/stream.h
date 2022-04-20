#pragma once

#include "message.h"

#include <iostream>

namespace Bridge::impl
{
    class Stream : public Message
    {
    public:
        Stream(std::wostream& out);
        void Write(const std::wstring& message) override;

    private:
        std::wostream& m_out;
    };
}