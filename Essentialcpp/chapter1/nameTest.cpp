#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"input your name: ";
    string firstName;
    string lastName;
    cin>>firstName;
    cout<<"\t";
    cin>>lastName;
    cout<<"hello, Miss"<<lastName<<endl;
    cout<<firstName+lastName<<" good bye!";

    return 1;
}