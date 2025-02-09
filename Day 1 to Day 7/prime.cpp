#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    bool isPrime=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if (isPrime==true){
        cout<<"n is Prime\n";
    }
    else{
        cout<<"n is non Prime\n";
    }
    return 0;
}