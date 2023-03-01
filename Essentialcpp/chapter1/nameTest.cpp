#include<iostream>
#include<string>

using namespace std;
//std算是内部继承的库，可以直接通过命名空间调用。


int main(){
    std::cout<<"input your name: ";
    std::string firstName;
    std::string lastName;
    std::cin>>firstName;
    std::cout<<"\t";
    std::cin>>lastName;
    std::cout<<"hello, Miss"<<lastName<<std::endl;
    std::cout<<firstName+lastName<<" good bye!";

    return 1;
}