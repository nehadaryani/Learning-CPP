#include<iostream> //conditional statements
using namespace std;
int main(){
    /*int n;
    cout<<"Enter any Number: ";
    cin>>n;
    if (n>0)
    {
        cout<<"Positive Number";
    }
    else
    {
        cout<<"Negative Number";
    }
    int age;
    cout<<"Enter your Age: ";
    cin>>age;
    if (age>=18)
    {
        cout<<"You are eligible to vote";
    }
    else
    {
        cout<<"You are not eligible to vote";
    }
    int n;
    cout<<"Enter any number to check whether it is odd or even: ";
    cin>>n;
    if (n%2==0)
    {
        cout<<"n is even";
    }
    else{
        cout<<"n is odd";
    }
    
    int n=1;
    while(n<=10){
        cout<<" "<<n;
        n++;
    }
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int count=1;
    while(count<=n){
        cout<<" "<<count;
        count++;
    }
    for (int i = 0; i <= 5; i++)
    {
        cout<<" "<<i;
    }
    
    int sum=0;
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
        
    }
    cout<<"sum of n numbers= "<<sum;
    
    int sum=0;
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        sum+=i;
    }
    cout<<"sum="<<sum;
    
    int sum=0;
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<"sum = "<<sum;
     
    int sum=0;
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        if(i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<<"sum = "<<sum;*/

    //NESTED LOOPS
    /*int n;
    cout<<"Enter n: "; //y axis
    cin>>n;
    
    int m;
    cout<<"Enter m: "; // x axis
    cin>>m;
    /*for (int i = 0; i <= n; i++)
    {
       cout<<"*****"<<endl;
    }
   for (int i = 1; i <= n; i++)
   {
    for (int j = 1; j <= m; j++)
    {
        cout<<" * ";
    }
    cout<<endl;
    
   }
   
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        if (i%3==0)
        {
            sum+=i;
        }
       
    }
    cout<<"Sum = "<<sum;
    */
    int n;
    cout<<"Enter any positive value of n: ";
    cin>>n;
    int factorial=1;
    for (int i = 1; i <= n; ++i)
    {
        factorial*=i;
    }
    
    cout<<"Factorial of n: "<<factorial;
    return 0;
}