#include<iostream>
using namespace std;

int main(){
    int x;
    int E=0;
    int O=0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x!=0){
        if(x%2==0){
        E++;
        }else{
        O++;
        }
        cout << "Enter an integer: ";
        cin >> x;
        }

    cout << "#Even numbers = "<< E<<"\n";
    cout << "#Odd numbers = "<< O;
    
    return 0;

}