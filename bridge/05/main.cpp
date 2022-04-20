#include "message.h"

int main() 
{
    Bridge::Message console;
    console.Write(L"Hello, world! (standard out)\n");

    Bridge::Message file{std::filesystem::path{L"./output.txt"}};
    file.Write(L"Hello, world! (file)\n");

    Bridge::Message stream{std::wcerr};
    stream.Write(L"Hello, world! (standard error)\n");

    return 0;
}