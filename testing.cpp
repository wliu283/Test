#include<iostream>
using namespace std;

int main(){
    cout << "Alex coding fot the test in LIU Wei's github 10120";
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout << "=";
        }
        cout << endl;
    }
    return 0;
}