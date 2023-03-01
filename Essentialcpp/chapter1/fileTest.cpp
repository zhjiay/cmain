#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

//fstream中 out和in都是相对内存来说。out指内存数据输出，in指外部数据输入内存。
//ofstream中 换行需要加入endl，这样每次才能输入一行
//ifstream 每个字符串是以空格的形式输出的。如果需要每次输出一行 则需要使用getline(ifstream,string)方法来操作。

int main0(){
    ofstream outFile("message.txt");
    if(!outFile){
        cerr<<"file don't exist!";
        return -1;
    }
    vector<string> mes;
    mes.emplace_back("this is a test for out file stream!");
    string str="more messages";
    for(int i=0;i<6;i++){
        mes.emplace_back(str);
        str+="more messages";
    }
    
    for(string s:mes){
        outFile<<s<<endl;
    }
    outFile.close();

    return 0;
}

int main(){
    ifstream inFile("message.txt");
    if(!inFile){
        cerr<<"file don't exist!";
        return -1;
    }
    string str;
    while (getline(inFile,str))
    {
        cout<<str<<endl;
    }
    return 0;
}