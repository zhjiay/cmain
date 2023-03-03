#include <iostream>
#include<cstdlib>
#include<limits>
#include<vector>


using namespace std;

void test(){
    int maxI=numeric_limits<int>::max();
    long double d=numeric_limits<long double>::max();
    cout<<"max:"<<d;
}

void swap(int &a,int& b){
    int temp=a;
    a=b;
    b=temp;
}

void dispaly(vector<int> v ){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

void bubbleSort(vector<int> &vec){
    for(int i=0;i<vec.size()-1;i++){
        for(int ii=0;ii<vec.size()-1-i;ii++){
            if(vec[ii]>vec[ii+1]) swap(vec[ii],vec[ii+1]);
        }
    }
}

void testP(vector<int>*);

inline void sort(){
    int arr[7]={31,21,7,28,17,11,20};
    vector<int> vec(arr,arr+7);
    dispaly(vec);

    bubbleSort(vec);

    dispaly(vec);
    testP(&vec);
}

void testP(vector<int> *vec){
    int size=(*vec).size();
    cout<<"size: "<<size;
}

template<typename T>
void testpp(vector<T> &vec){
    for(T v:vec){
        cout<<v<<endl;
    }
}

void testt213(){
    double dd[4]={1.21,3.23,4.12,0.32};
    vector<double> vec(dd,dd+4);
    testpp(vec);
}

int main(){
    testt213();

    return 0;
}