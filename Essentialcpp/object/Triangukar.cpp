#include<iostream>
#include<vector>
#include<string>
#include"test.h"

using namespace std;

class Triangular{
public:
    
    string to_string();

    Triangular(int a=1,int b=1);
    Triangular(Triangular &);
    ~Triangular(){}

private:
    int _length;
    int _beg_pos;
    int _next;
};

Triangular::Triangular(int a,int b){
    _length=a;
    _beg_pos=b;
}

Triangular::Triangular(Triangular &t){
    _length=t._length;
    _beg_pos=t._beg_pos;
    _next=t._next;
}

string Triangular::to_string(){
    return  "_length: "+std::to_string(_length)+"\t"+"_beg_pos: "+std::to_string(_beg_pos);
}

int main(){
    cout<<endl;
    Triangular tr;

    cout<<tr.to_string();

 
    return 0;
}