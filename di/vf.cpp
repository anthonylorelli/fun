#include <iostream>
#include <string>
#include <memory>

class Animal
{
public:
    virtual std::string Speak() = 0; 
};

class Cat : public Animal
{
public:
    std::string Speak() override
    {
        return "Meow!";
    }
};

class Cow : public Animal
{
public:
    std::string Speak() override
    {
        return "Moooo!";
    }
};

class Dog : public Animal
{
public:
    std::string Speak() override 
    {
        return "Bark!";
    }
};

void MakeSound(Animal& a)
{
    std::cout << a.Speak() << "\n";
}

int main()
{
    Cat cat;
    Cow cow;
    Dog dog;
    MakeSound(cat);
    MakeSound(cow);
    MakeSound(dog);
    return 0;
}