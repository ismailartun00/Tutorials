#include <iostream>
#include <string>

int main(){
    std::string hello = "find first of(char , start ), find first\tnot\tof,\tfind last of, and find last not of functions will search for given character or one of the given characters in the string starting from given position. Find last functions will move to the start of the string and first will move to the end. If start is not given, and first functions will start from the beginning, and last functions will start from the end.";

    std::size_t found = 0;

    while(true){
        found = hello.find_first_of(" \t", found);

        if(found == std::string::npos)
            break;
        std::cout << hello.substr(found, 6) << std::endl;  //llo World!(endl)lld!
        found++;
    }

    std::cin.get();
}