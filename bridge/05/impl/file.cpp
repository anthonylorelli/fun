#include "file.h"

#include <fstream>

using namespace Bridge::impl;

File::File(const std::filesystem::path& path) :
    m_path{path} { }

void File::Write(const std::wstring& message)
{
    std::wofstream file{m_path};
    file << message;
}
