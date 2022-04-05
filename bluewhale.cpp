#include <iostream>
#include <string_view> 

enum class Animals
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck
};

constexpr std::string_view getAnimalName(Animals amimal) // C++17
{
    switch (amimal)
    {
    case Animals::pig: return "pig";
    case Animals::chicken:   return "chicken";
    case Animals::goat:  return "goat";
    case Animals::cat:  return "cat";
    case Animals::dog:  return "dog";
    case Animals::duck:  return "duck";
    default:    return "???";
    }
}

int numberOfLegs(Animals amimal) {
    switch (amimal)
    {
    case Animals::pig: return 4;
    case Animals::chicken:   return 2;
    case Animals::goat:  return 4;
    case Animals::cat:  return 4;
    case Animals::dog:  return 4;
    case Animals::duck:  return 2;
    default:    return 2;
    }
}


int main()
{   
    std::cout << "Enter a pet (0=pig, 1=chicken, 2 = goat, 3 = cat, 4 = dog, 5 = duck): ";

    int input{};
    std::cin >> input; // input an integer

    Animals animal{ static_cast<Animals>(input) }; // static_cast our integer to a Pet

    std::cout << "a " << getAnimalName(animal) << " has " << numberOfLegs(animal) << " legs\n";

    return 0;
}