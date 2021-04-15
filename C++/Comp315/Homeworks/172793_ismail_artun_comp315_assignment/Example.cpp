#include "Impl.h"

int main(){
    //----------------------------------------
    Stack<int> a1(10);
    a1.Push(51), a1.Push(31), a1.Push(21), a1.Push(11), a1.Push(41), a1.Push(61);
    a1.Pop();
    //----------------------------------------
    Stack<int> a2(8);
    a2.Push(52), a2.Push(32), a2.Push(22), a2.Push(12), a2.Push(42), a2.Push(62);
    a2.Pop();
    //----------------------------------------
    Stack<int> a3(9);
    a3.Push(53), a3.Push(33), a3.Push(23), a3.Push(13), a3.Push(43), a3.Push(63);
    a3.Pop();
    //----------------------------------------
    
    //-----------------Move Constructor-----------------------
    Stack<int> a9(std::move(a3));
    std::cout << "a9 copied from a3 with move constructor: " << "\n" << a9(0) << " <-a9(0)" << "\n" << std::endl; 
    //-----------------Move Assignment-----------------------
    Stack<int> a8(4);
    a8 = std::move(a2); 
    std::cout << "a8 copied from a2 with move assignment: " << "\n" << a8(0) << " <-a7(0)" << "\n" << std::endl; 
    //-----------------Copy Constructor-----------------------
    Stack<int> a5(a1);
    std::cout << "a5 copied from a1 with copy constructor: " << "\n" << a5[0] << " <-a5[0]" << "\n" << a1[0] << " <-a1[0]" << "\n" << std::endl; 
    //-----------------Copy Assignment-----------------------
    Stack<int> a6(5);
    a6.Push(5), a6.Push(55), a6.Push(555);
    Stack<int> a7(3);
    a7.Push(7), a7.Push(77), a7.Push(777);
    a7 = a6; 
    std::cout << "a7 copied from a6 with copy assignment: " << "\n" << a7[0] << " <-a7[0]" << "\n" << a6[0] << " <-a6[0]" << "\n" << std::endl; 
    //-----------------Peek-----------------------
    std::cout << "Peek value of a1: " << a1.Peek() << "\n" <<std::endl;
    //-----------------SetAll--------------------------------------
    Stack<int> t(10);
    t.SetAll(100);
    std::cout << "100 value is putted with SetAll function, t[5]: " << t[5] << "\n" << std::endl;
    //-----------------ReSize--------------------------------------
    a5.ReSize(5);
    std::cout << "New size of a5[10] is " << a5.GetSize() << "\n" << std::endl;
    //-----------------operator[], () testing-----------------------
    std::cout << "a1[0]: " << a1[0] << std::endl;
    std::cout << "a1(1): " << a1(1) << "\n" << std::endl;
    //-----------------ostream and operator==, != testing-----------------------
    std::cout << "a1==a5: " <<(a1==a5) << std::endl;
    std::cout << "a1!=a5: " << (a1!=a5) << "\n" << std::endl;
    //-----------------istream testing-----------------------
    /*Stack<int> test;
    std::cin >> test;
    std::cout << "Size of test is " << test.GetSize() << std::endl;*/
    //----------------------------------------
    
    

    return 0;
}
