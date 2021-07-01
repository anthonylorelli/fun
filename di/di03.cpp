#include <chrono>
#include <format>
#include <iostream>
#include <memory>
#include <string>

class IMessageStream
{
public:
    virtual void Write(const std::string& message) = 0;
};

class FormatStream : public IMessageStream
{
public:
    FormatStream(std::unique_ptr<IMessageStream> stream) : m_stream{std::move(stream)} { }

    void Write(const std::string& message) override 
    {
        m_stream->Write(std::format("{}: {}", std::chrono::utc_clock::now(), message));
    }

private:
    std::unique_ptr<IMessageStream> m_stream;
};

class ConsoleStream : public IMessageStream
{
public:
    void Write(const std::string& message) override 
    {
        std::cout << message;
    }
};

class TheWorld
{
public:
    TheWorld(std::unique_ptr<IMessageStream> stream) : m_stream{std::move(stream)} { }

    void Greet() 
    {
        m_stream->Write("Hello world!\n");
    }

private:
    std::unique_ptr<IMessageStream> m_stream;
};

int main()
{
    TheWorld world(std::make_unique<FormatStream>(std::make_unique<ConsoleStream>()));
    world.Greet();
    return 0;
};
