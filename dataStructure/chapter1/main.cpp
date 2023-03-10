#include<iostream>

using namespace std;

void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}



void reverse(int* arr,int a,int b){
    mark:
    if(a<b){
        swap(arr[a],arr[b]);
        a++;
        b--;
        goto mark;
    }
}

int fib(int n){
    int a=1,b=1;
    for(int i=3;i<=n;i++){
        a=a+b;
        b=a-b;
    }
    return a;
}

void test(){
    int arr[7]={1,2,3,4,5,6,7};

    int *p=arr;

    cout<<*(p+1)<<endl;
    
    reverse(arr,0,6);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){

    int a=1500000000,b=1700000000;
    swap(a,b);
    cout<<"a:"<<a<<"b:"<<b;
    
    return 0;
}