#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

void GenerateFunction(std::vector<std::string>& v1){
    v1.resize(150);
    std::generate(v1.begin(), v1.end(), [](){ 
        char wovel[] = "aeiou";     
        int v = wovel[rand() % 5];
        if(rand()%4==0){
            return 32;
        }
        else if(rand()%4==0){
            return v;
        }
        else{
            return(rand()%26+'a');
        }
    });
}
void ConvertToString(std::vector<std::string>& v1, std::string& s1){
    for(int i=0; i<v1.size(); i++)
        s1 = s1 + v1.at(i);
}
void RemoveSpace(std::vector<std::string>& v1){
    for(std::string str : v1)
        str.erase(std::remove(str.begin(), str.end(), ' '),str.end());
    v1.erase(std::remove_if(v1.begin(), v1.end(), 
        [](const std::string& s) 
        { return s.find(';', 0); }));
    }
void Sort(std::vector<std::string>& v1){
    std::sort(v1.begin(), v1.end());
}
std::string RandomDot(std::string s2){
	std::string dot = ".";     
	if(rand()%10==0){
		s2 = ".";
		return s2;
	}
	else{
		s2= "";
		return s2;
	}
}
void Split(std::string s1, std::vector<std::string>& v1, const char space = ' '){
    std::size_t current, previous = 0;
    current = s1.find_first_of(space);
    while (current != std::string::npos){
        std::string s2;
	    s2 = RandomDot(s2);
        v1.push_back(s1.substr(previous, current - previous) + s2);
        previous = current + 1;
        current = s1.find_first_of(space, previous);
    }
    v1.push_back(s1.substr(previous, current - previous));
}
void print(std::string s1){
    std::cout << s1 << std::endl;
}
void print(std::vector<std::string> v1){
    for(auto x : v1)
        std::cout << x << std::endl;
}

int main(){
    std::vector<std::string> hello;
    std::vector<std::string> deneme2;
    std::string deneme;

    GenerateFunction(hello);
    ConvertToString(hello, deneme);
    Split(deneme, deneme2);
    RemoveSpace(deneme2);
    Sort(deneme2);
    
    print(deneme2);

    std::cin.get();
}   

