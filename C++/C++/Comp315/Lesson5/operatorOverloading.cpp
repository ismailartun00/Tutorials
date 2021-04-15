#include <iostream>
#include <string>

struct Vector2{
    float x, y;
    bool value;
    Vector2(float x, float y) : x(x), y(y){}
    //explicit Vector2(const Vector2& other) : x(other.x), y(other.y){}
    //---------------------------------------------

    //Arithmetic Operators Overloading
    Vector2 operator+(const Vector2& other) const{
        return *this + other;
        //explicit v
        //return Vector2(x + static_cast<float>(other.x), y + static_cast<float>(other.y));
    }
    Vector2 operator-(const Vector2& other) const{
        return *this - other;
    }
    Vector2 operator*(const Vector2& other) const{
        return *this * other;
    }
    Vector2 operator/(const Vector2& other) const{
        return *this / other;
    }
    //---------------------------------------------

    //Assignment Operators Overloading

    //---------------------------------------------

    //Comparision Operators Overloading
    bool operator==(const Vector2& other) const{
        return x == other.x && y == other.y;
    }
    bool operator!=(const Vector2& other) const{
        return !(*this == other);
    }
    bool operator>=(const Vector2& other) const{
        return *this >= other;
    }
    bool operator<=(const Vector2& other) const{
        return *this <= other;
    }
    bool operator>(const Vector2& other) const{
        return *this > other;
    }
    bool operator<(const Vector2& other) const{
        return *this < other;
    }
    //---------------------------------------------

    //Logic Operators Overloading(bunlarla alakalı bir sorun var çok kullanışlı değil)
    friend bool operator|| (const Vector2& left, const Vector2& right);
    friend bool operator&& (const Vector2& left, const Vector2& right);
    //---------------------------------------------

    //Stream Operators Overloading
    friend std::ostream& operator<<(std::ostream& stream, const Vector2& other);
    friend std::istream& operator>>(std::istream& stream, Vector2& other);
    //---------------------------------------------
};

//Logic Operators Overloading
bool operator&& (const Vector2& left, const Vector2& right){
        return left.value && right.value;
}
bool operator|| (const Vector2& left, const Vector2& right){
        return left.value || right.value;
}

//Stream Operators Overloading
std::ostream& operator<<(std::ostream& stream, const Vector2& other){
    stream << other.x << ", " << other.y;
    return stream;
}
std::istream& operator>>(std::istream& stream, Vector2& other){
    stream >> other.x >> other.y;
    return stream;
}

int main(){
    Vector2 position ( 4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerup(1.1f, 1.1f);

    Vector2 result1 = position + (speed * powerup);
    Vector2 result2 = position + speed * powerup;

    if(result1 != result2){
        std::cout << "Calismadi." << std::endl;
    }
    else if(result1 == result2){
        std::cout << "Calisti." << std::endl;
    }
    
    std::cout << result2 << std::endl;

    std::cin.get();
}