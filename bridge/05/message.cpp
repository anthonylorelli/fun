#include "message.h"

#include "impl/console.h"
#include "impl/file.h"
#include "impl/stream.h"

using namespace Bridge;

Message::Message() : 
    m_impl{std::make_unique<impl::Console>()} { }

Message::Message(const std::filesystem::path& path) : 
    m_impl{std::make_unique<impl::File>(path)} { }

Message::Message(std::wostream& out) : 
    m_impl{std::make_unique<impl::Stream>(out)} { }

Message::~Message() { }

void Message::Write(const std::wstring& msg)
{
    m_impl->Write(msg);
}