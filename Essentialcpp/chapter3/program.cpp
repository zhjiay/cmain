#include<iostream>
#include<vector>
#include<list>
#include<string>

using namespace std;

template<typename T ,typename elem>
T find(T t1,T t2,const elem &v){
    for(;t1!=t2;t1++){
        if((*t1)==v) return t1;
    }
    return t2;
}

void test(){
    int arr[7]={1,2,3,4,5,6,7};
    vector<int> vec(arr,arr+7);
    list<int> lst(arr,arr+7);

    int find_value=2;
    int *p=find(arr,arr+7,find_value);
    vector<int>::iterator t=find(vec.begin(),vec.end(),find_value);
    list<int>::iterator l=find(lst.begin(),lst.end(),find_value);

    cout<<*p<<endl;
    cout<<*t<<endl;
    cout<<*l<<endl;

}

int main(){
    test();

    return 0; 
}