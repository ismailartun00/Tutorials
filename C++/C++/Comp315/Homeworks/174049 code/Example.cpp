#include "Impl.cpp"

int main() {
    LinkedList<int>* list = new LinkedList<int>();
    for(int i=0; i<5;i++){
        list->addnode(i);
    }
    list->addnode(5);
    std::cout << "Linked List data" << std::endl;
    list->display();
    list->find(3);
    list->display();
    list->reverseList();
    std::cout << "Reversed Linked List data" << std::endl;
    list->display();
    list->remove(3);
    list->display();    
       

    std::cout << "--------------" << std::endl;

    LinkedList<int>* list1 = new LinkedList<int>();
    for(int i=5; i<10;i++){
        list1->addnode(i);
    }

    LinkedList<int>* list2 = new LinkedList<int>();
    for(int i=10; i<15;i++){
        list2->addnode(i);
    }

    LinkedList<int>* list3(std::move(list2));    //move constructor

    list1->display();
    std::cout << "------------" << std::endl;
    list3->display();

    LinkedList<int>* list4 = new LinkedList<int>();
    for(int i=1; i<5;i++){
        list4->addnode(i);
    }
    list4 = std::move(list2);               //move assignment
    std::cout << "----------" << std::endl;
    list4->display();

    std::cout << "list5----------" << std::endl;
    LinkedList<int>* list5 = new LinkedList<int>();
    for(int i=1; i<5;i++){
        list5->addnode(i);
    }
    list5 = list2;    
    list5->display();                      //copy assignment
    std::cout << "list2----------" << std::endl;
    list2->display();
    
    std::cout << "----aa------" << std::endl;

    LinkedList<int>* list15 = new LinkedList<int>();
    for(int i=50; i<100;i++){
        list15->addnode(i);
    }
    list15->display();


    if(list5!=list2){
        std::cout << "equal" << std::endl;
    }
    else{
        std::cout << "not equal" << std::endl;
    }
    std::cout << "Template----------" << std::endl;
    LinkedList<std::string>* listlist = new LinkedList<std::string>();
    listlist->addnode("fa");
    listlist->addnode("zl");
    listlist->addnode("id");
    listlist->addnode("din");

    listlist->display();
    std::cout << "--------------" << std::endl;

    LinkedList<std::string>* listtsil(listlist);
    listtsil->display();
    std::cout << "-----------------" << std::endl;

    delete list;
    return 0;
}
