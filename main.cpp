#include <iostream>
#include<string>
#include<vector>
#include<fstream>
#include<cmath>

#define PI 3.141592653589793

using namespace std;


void writeFilePath(){
    string fileDir="E:/data/3D0221/";
}

void test01(){
    const double singleSize=191250.5;
    cout<<singleSize*3;
}

void testCharPtr(){
    srand(1);
    int length;
    cin>>length;
    vector<char> vec;
    char *arr;
    arr=new char[length];
    while (length-->0)
    {
        char temp='a'+rand()%26;
        vec.emplace_back(temp);
    }
    copy(vec.begin(),vec.end(),arr);
    string str(arr);
    cout<<endl<<str;

    delete[] arr;
}

void testTan2(){
    float res=atan2(-1.,1.);
    
    if(res<0){
        res+=2*PI;
    }
    res/=PI;

    cout<<"res: "<<res;
}

void testL(){
    double h1=12;
    double h2=13;

    double ll=-3;

    double res=h1*(1-ll)+h2*ll;
    cout<<"res "<<res;
}

void testVEC(){
    vector<double> list;
    for(int i=0;i<13;i++){
        list.emplace_back(0.1+i);
    }
    double v=-10;
    auto ptr=list.begin();
    int index=std::lower_bound(ptr,ptr+list.size(),v)-ptr;
    cout<<"index "<<index;
}

int main(){
    testVEC();

    return 0;
}
