#include <iostream>

int main(){
    //run time
	const int x = 0;

	//compile time
	#define x 100;
	constexpr int z = 100;

    std::cin.get();
}