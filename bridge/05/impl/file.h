#pragma once

#include "message.h"

#include <filesystem>

namespace Bridge::impl
{
    class File : public Message
    {
    public:
        File(const std::filesystem::path& path);
        void Write(const std::wstring& message) override;

    private:
        std::filesystem::path m_path;
    };
}