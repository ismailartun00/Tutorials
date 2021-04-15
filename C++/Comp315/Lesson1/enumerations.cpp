#include <iostream>
#include <vector>

enum TimeofDay{
    Morning,
    Noon,
    Afternoon,
    Evening,
    Night
};

enum DayofWeek{
    Unknown,
    Monday,
    Tuesday
}; 

void PrintWelcomeMessage(TimeofDay timeofday){
    switch(timeofday){
        case Morning:
            std::cout << "Good Morning " << std::endl;
            break;
        case Noon:
            std::cout << "Good Noon " << std::endl;
            break;
        case Afternoon:
            std::cout << "Good Afternoon " << std::endl;
            break;
        case Evening:
            std::cout << "Good Evening " << std::endl;
            break;
        case Night:
            std::cout << "Good Night " << std::endl;
            break;
        default:
            std::cout << " " << std::endl;
            break;
    }
}

int main(){
    
    PrintWelcomeMessage(Night);

    std::cin.get();
}