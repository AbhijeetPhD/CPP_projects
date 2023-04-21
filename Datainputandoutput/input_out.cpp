#include <iostream>
int main(){
    std::cout<<"hello"<<std::endl;
    int age{21};
    std::cout<<"age"<<age<<std::endl;

    std::cerr<<"error"<<std::endl;
    //
    int age1;
    std ::string name;
    std::cout<<"enter your name and age"<<std::endl;
    std::cin>>name;
    std::cin>>age1;
    std::getline(std::cin,name);
    //std::getline(std::cin,name);
    std::cout<<"hello "<<name<<" your age is "<<age1<<std::endl;

    return 0;
}