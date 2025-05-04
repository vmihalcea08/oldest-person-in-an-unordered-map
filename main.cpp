#include <iostream>
#include <unordered_map>
#include <string>

int main() 
{
    std::unordered_map<int, std::string> person {};
    
    int number {};
    std::cout << "Enter the number of persons: ";
    std::cin >> number;
    
    std::string name {};
    int age {};
    int maxAge {};
    
    for (int index {0}; index < number; ++ index)
    {
        std::cout << "Enter the name of person #" << index+1 << ": ";
        std::cin >> name;
        
        std::cout << "Enter the age of " << name << ": ";
        std::cin >> age;
        
        person[age] = name;
        
        if (age > maxAge) 
            maxAge = age;
        
    }
    
    std::cout << "The oldest person (" << maxAge << ") is " << person[maxAge];

    return 0;
}
