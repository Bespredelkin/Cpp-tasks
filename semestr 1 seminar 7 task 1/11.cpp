#include <iostream>
using namespace std;

class Animals
{
private:
    int age;
    std::string breed;
    std::string name;
public:
    Animals(int p_age, std::string p_breed, std::string p_name) : age(p_age), breed(p_breed), name(p_name) {}
    virtual void makeSound() = 0;
    void Print()
    {
        std::cout << "\nage: " << age
            << "\nbreed: " << breed
            << "\nname: " << name << std::endl;
    }
};

class Cat : public Animals
{
public:
    Cat(int age, std::string breed, std::string name) : Animals{ age, breed, name } {}
    void makeSound()
    {
        std::cout << "Myau" << std::endl;
    }
};

class Dog : public Animals
{
public:
    Dog(int age, std::string breed, std::string name) : Animals{ age, breed, name } {}
    void makeSound()
    {
        std::cout << "Ia ia ia" << std::endl;
    }
};

int main()
{
    std::string name, breed;
    int age = 0;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "\nEmter age: ";
    std::cin >> age;
    std::cout << "\nEnter breed: ";
    std::cin >> breed;
    Cat cat(age, breed, name);
 // cat.Print();
    cat.makeSound();
    std::cout << "\nEnter name: ";
    std::cin >> name;
    std::cout << "\nEmter age: ";
    std::cin >> age;
    std::cout << "\nEnter breed: ";
    std::cin >> breed;
    Dog dog(age, breed, name);
    dog.Print();
    dog.makeSound();
}