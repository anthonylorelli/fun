#pragma once

#include "message.h"

namespace Bridge::impl
{
    class Console : public Message
    {
    public:
        void Write(const std::wstring& message) override;
    };
}