#pragma once

#include <filesystem>
#include <iostream>
#include <memory>
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
        Message(std::wostream& out);
        Message(const std::filesystem::path& path);
        ~Message();

        void Write(const std::wstring& msg);

    private:
        std::unique_ptr<impl::Message> m_impl;
    };
}