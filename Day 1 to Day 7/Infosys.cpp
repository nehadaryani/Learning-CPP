#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    /*int fact=1;
    for (int i = 1; i <= n; ++i)
    {
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" : "<<fact;*/

    bool isPrime=true;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
           isPrime=false;
           break;
        }
    }
    if (isPrime==true){
        cout<<n<<" is prime number.";
    }
    else if (isPrime==false)
    {
        cout<<n<<" is not a prime number";    
    }
   
    
    return 0;
}