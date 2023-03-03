#include<iostream>
#include<vector>

using namespace std;


bool compare(int a,int b){
    return a>=b;
} 

void swap(int &a,int &b){
    int temp=b;
    b=a;
    a=temp;
}

inline void sort(vector<int> *vec,bool (*comp)(int,int)){
    if((*vec).size()<=1){
        return ;
    }else{
        for(int i=0;i<(*vec).size()-1;i++){
            for(int ii=0;ii<(*vec).size()-1-i;ii++){
                if(!comp((*vec)[ii],(*vec)[ii+1])){
                    swap((*vec)[ii],(*vec)[ii+1]);
                }
            }
        }
    }
};


int main(){
    vector<int> vec;
    srand(0);
    int length;
    cout<<"input length: ";
    cin>>length;
    for(int i=0;i<length;i++){
        vec.emplace_back(rand()%100);
    }
    for(int i:vec){
        cout<<i<<" ";
    }

    sort(&vec,compare);
    cout<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }
    return 0;
}
