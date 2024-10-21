// grabs first and last name
// code by Ryuya

#include <iostream>
#include <string>

int main() {
    std::string full_name = "John Cena";
    int seperator = full_name.find(' ');
    std::string first_name = full_name.substr(0, seperator);
    std::string last_name = full_name.substr(seperator + 1, full_name.size());
    
    std::cout << last_name << ", " << first_name;

    return 0;
}
