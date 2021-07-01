#include <cassert>
#include <iostream>
#include <memory>
#include <string>

class IMessageStream
{
public:
    virtual void Write(const std::string& message) = 0;
};

class MessageObserverStream : public IMessageStream
{
public:
    void Write(const std::string& message) override 
    {
        m_str += message;
    }

    std::string ObservedMessage() const 
    {
        return m_str;
    }

private:
    std::string m_str;
};

class TheWorld
{
public:
    TheWorld(IMessageStream* stream) : m_stream{stream} { }

    void Greet() 
    {
        m_stream->Write("Hello world!\n");
    }

private:
    IMessageStream* m_stream;
};

int main()
{
    auto stream = std::make_unique<MessageObserverStream>();
    TheWorld world(stream.get());
    world.Greet();
    std::cout << (stream->ObservedMessage() == "Hello world!\n") << "\n";
    return 0;
};
