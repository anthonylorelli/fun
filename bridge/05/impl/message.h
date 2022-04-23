#pragma once

#include <string>

namespace Bridge::impl
{
    class Message
    {
    public:
        virtual ~Message() = default;

        virtual void Write(const std::wstring& message) = 0;
    };
}