#include<iostream>
#include<string>
#include<vector>

using namespace std;
//std算是内部继承的库，可以直接通过命名空间调用。

void test(){
    std::cout<<"input your name: ";
    std::string firstName;
    std::string lastName;
    std::cin>>firstName;
    std::cout<<"\t";
    std::cin>>lastName;
    std::cout<<"hello, Miss"<<lastName<<std::endl;
    std::cout<<firstName+lastName<<" good bye!";
}

void exitTest(){
    int a;
    cin>>a;
    if(a<0){
        cerr<<"Nagative Integer is unaccepteable";
        exit(-1);

    }else{
        cout<<"a value is "<<a;
    }
}

vector<int> vecTest(int size){
    vector<int> vec(size);
    if(size==1){
        vec[0]=1;
    }else{
        vec[0]=1;       
        for(int i=1;i<size;i++){
            if(i==1){
                vec[i]=vec[i-1];
            }else{
                vec[i]=vec[i-1]+vec[i-2];
            }
        }
    }
    return vec;
}
int main(){

    vector<int> vect=vecTest(10);
    for(auto v:vect){
        cout<<v<<" ";
    }
    return 1;
}