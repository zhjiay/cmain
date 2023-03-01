#include<iostream>
#include<string>
#include<fstream>

using namespace std;

ofstream outFile("message.txt");


int fibArr(int number){
    if(number<2){
        cout<<"number value is unqualified";
        return 0;
    }
    int a=1,b=1;
    int temp;
    cout<<a<<" ";
    do{
        cout<<b<<" ";
        temp=b;
        b+=a;
        a=temp;
    }while (--number>=2);
    return b;
}


int main(){
    

    cout<<"the arr is: ";
    int number=5;
    int answer=fibArr(number);
    int yAnswer;
    char YorN;
    do{
        cout<<"is start game(y/n)? ";
        cin>>YorN;
        if(YorN=='n'||YorN=='N'){
            return 0;
        }else if(YorN=='y'||YorN=='Y'){
            do{
                cout<<"input your answer： ";                
                cin>>yAnswer;
                if(yAnswer!=answer) cout<<"wrong! \n";               
            }while(yAnswer!=answer);
            cout<<"right!\n";

            number++;
            cout<<"the arr is: ";
            answer=fibArr(number);         
        }else{
            return -1;
        }
    }while(true);
}