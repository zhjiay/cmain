#include<iostream>
#include<vector>

using namespace std;

template<typename T>
T* tBegin(vector<T> *vec){
    return vec->empty()?nullptr:&vec[0];

}

template<typename T>
T* tBegin( T* arr){
    return !arr?0:arr;
}

template<typename T>
T* tEnd(vector<T> *vec,int size){
    return vec->empty()?nullptr:(&vec[0]+size);
}

template<typename T>
T* tEnd( T* arr,int size){
    if(!arr) return arr;
    return (arr+size);
    
}

template<typename T>
int find(T * pbegin,T* pend,const T & value){
    if(!pbegin) return -2;
    if(!pend) return -3;
    int i=0;

    while ((pbegin+i)!=pend)
    {
        if(pbegin[i]==value) return i;
        i++;
        
    }
    return -1;
}

template<typename iT,typename T>
iT find(iT first,iT second,const T &value){
    while (first!=second)
    {
        if(value ==*first) return first;
        first++;
    }
    return second;
}



void test(){
    int arr[7]={11,12,13,14,15,16,17};
    vector<int> vec(arr,arr+7);
    int value=15;
    vector<int>::iterator it=find(vec.begin(),vec.end(),value);
    cout<<*it;

} 


int main(){
    test();


    return 0;
}