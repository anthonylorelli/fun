#pragma once

#include <string>

namespace Bridge
{
    namespace impl
    {
        class Message;
    }

    class Message
    {
    public:
        Message();
        ~Message();
        void Write(const std::wstring& msg);

    private:
        impl::Message* m_impl;
    };
}