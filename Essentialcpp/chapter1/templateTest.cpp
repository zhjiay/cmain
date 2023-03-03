#include<iostream>
#include<vector>

using namespace std;

template<typename T>
void swap1(T *a,T *b){
    T temp=*a;
    *a=*b;
    *b=temp;
};

template<typename T>
bool compare(T a,T b){
    return a>=b;
}

template<typename T>
void sort(vector<T> &vec,bool (*comp)(T,T)){
    if(vec.size()<=1){
        return ;
    }else{
        for(int i=0;i<vec.size()-1;i++){
            for(int ii=0;ii<vec.size()-1-i;ii++){
                if(comp(vec[ii],vec[ii+1])){
                    swap1(&vec[ii],&vec[ii+1]);
                }
            }
        }
    }
}



int main(){
    vector<string> vec;
    srand(1);
    cout<<"inpt length: ";
    int length;
    cin>>length;
    for(int i=0;i<length;i++){
        int strL=rand()%5+5;
        char a='a';
        char *cPtr=new char[strL];
        while(strL-- >0)
        {
            char tempChar='a'+rand()%26;
            cPtr[strL]=tempChar;
        }
        string strr(cPtr);
        vec.emplace_back(strr);
    }
    cout<<endl<<"before sort: ";
    for(auto i:vec){
        cout<<i<<" ";
    }
    sort(vec,compare);
    cout<<endl<<"after sort: ";
    for(auto i:vec){
        cout<<i<<" ";
    }

    return 0;
}