#include <string>
#include <iostream>
#include <sstream>


int main()
{
    std::string color;
    std::cout << "What color car did you see? ";
    std::getline(std::cin, color);
    std::cout << "I saw a " << color << " car yesterday\n";



  
    return 0;
}

//enum class MonsterType {
//    orge,
//    dragon,
//    aGiantSpider,
//    aSlime,
//};
//
//struct Monster {
//    MonsterType monster;
//    std::string_view name;
//    int health;
//};
//
//
//
//void printMonster(const Monster& monster) {
//    std::cout << " is named " << monster.name << " has " << monster.health << " health " << "\n";
//}
//
//void printType(const Monster& monster) {
//    switch (monster.monster) {
//    case MonsterType::orge:
//        std::cout << "This orge";
//        break;
//    case MonsterType::dragon:
//        std::cout << "This dragon";
//        break;
//    case MonsterType::aGiantSpider:
//        std::cout << "This Giant Spider";
//        break;
//    case MonsterType::aSlime:
//        std::cout << "This Slime";
//        break;
//    default:
//        std::cout << "This human";
//        break;
//    }
//}




//struct Employee
//{
//    int id{};
//    int age{};
//    double wage{};
//};
//
//struct Fraction {
//    int numerator{};
//    int denominator{};
//};
//
//void fractionReader(const Fraction& fract) {
//    std::cout << "the numerator is " << fract.numerator << "\n";
//    std::cout << "the denominator is " << fract.denominator << "\n";
//}
//
//Fraction Multiply(const Fraction& fract, const Fraction& fract2) {
//    return Fraction{ fract.numerator * fract2.numerator,fract.denominator * fract2.denominator };
//}
//
//void returnReader(const Fraction& fract) {
//    std::cout << "Your fractions multplied together: " << fract.numerator << "/" << fract.denominator << "\n";
//}


//struct Advert {
//    double numOfAds{};
//    double percentClickedOn{};
//    double RevenuePerDay{};
//};
//
//double Sum(const Advert& balls) {
//    return balls.numOfAds * balls.percentClickedOn * balls.RevenuePerDay;
//}
//
//void printInfo(const Advert& balls) {
//    std::cout << "Number of ads: " << balls.numOfAds << '\n';
//    std::cout << "Percent Clicked on : " << balls.percentClickedOn << '\n';
//    std::cout << "Revenue Per Day : " << balls.RevenuePerDay << '\n';
//}


//void printEmployee(const Employee& employee) // note pass by reference here
//{
//    std::cout << "ID:   " << employee.id << '\n';
//    std::cout << "Age:  " << employee.age << '\n';
//    std::cout << "Wage: " << employee.wage << '\n';
//}


//struct Fraction
//{
//    int numerator{};
//    int denominator{};
//};
//
//double divideBy(int x, int y) {
//
//    return (x / y);
//}
//
//double divideBy(double x, double y) {
//    return (x / y);
//}


//enum class Animals
//{
//    pig,
//    chicken,
//    goat,
//    cat,
//    dog,
//    duck
//};
//
//constexpr std::string_view getAnimalName(Animals amimal) // C++17
//{
//    switch (amimal)
//    {
//    case Animals::pig: return "pig";
//    case Animals::chicken:   return "chicken";
//    case Animals::goat:  return "goat";
//    case Animals::cat:  return "cat";
//    case Animals::dog:  return "dog";
//    case Animals::duck:  return "duck";
//    default:    return "???";
//    }
//}
//
//int numberOfLegs(Animals amimal) {
//    switch (amimal)
//    {
//    case Animals::pig: return 4;
//    case Animals::chicken:   return 2;
//    case Animals::goat:  return 4;
//    case Animals::cat:  return 4;
//    case Animals::dog:  return 4;
//    case Animals::duck:  return 2;
//    default:    return 2;
//    }
//}