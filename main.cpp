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

void testBreak(){
    for(int i=0;i<5;i++){
        for(int ii=0;ii<5;ii++){
            if(i==2&&ii==2) continue;
            
            cout<<"i: "<<i<<"\tii: "<<ii<<endl;
        }
    }
}

int fileTest(){//获取calibrate 图作为 product 图
    vector<string> file_list;
    std::string calibTxt="E:/data/3D0221/calib.txt";
    string proTxt="E:/data/3D0221/produC.txt";
    ifstream ifile(calibTxt);
    if(!ifile) return -1;
    string str;
    while (getline(ifile,str))
    {
        file_list.emplace_back(str);
    }
    if(file_list.size()%12 !=0) return -2;
    cout<<"filelist size :"<<file_list.size()<<endl;

    const int DLP=780;//每个高度5组，只取第一组
    int height=9;
    vector<string> pro_list;
    for(int i=0;i<4;i++){
        int begin=i*DLP+height*5*12;
        for(int j=0;j<12;j++){
            pro_list.emplace_back(file_list[begin+j]);
        }
    }
    cout<<"pro_list size :"<<pro_list.size();

    ofstream ofile(proTxt);
    if(!ofile) return -3;
    for(string s : pro_list){
        ofile<<s<<endl;
    }
    ofile.close();
    return 0;
    
}

int main(){
    int result = fileTest();
    cout<<endl<<"result:"<<result;
    return 0;
}