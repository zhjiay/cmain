#include <iostream>

using namespace std;


void randTest(){
    // srand(50);
    for(int i=0;i<10;i++){
        cout<<rand()%10<<endl;
    }
}

int main(){
    cout<<"hello test"<<endl;

    randTest();

    return 0;
}
