#include "message.h"

int main() 
{
    Bridge::Message message;
    message.Write(L"Hello, world!\n");
    return 0;
}