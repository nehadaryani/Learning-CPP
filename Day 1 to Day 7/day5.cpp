//FUNCTIONS IN C++
#include<iostream>
using namespace std;
/*void text(){
    cout<<"Hello Guys.....";
}*/
/*
int sum(int a,int b){
    return a+b;
}
int product(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}
int subtract(int a,int b){
    return a-b;
}*/
/*int first(){
    cout<<"Hello guys..."<<endl;
    return 5;
}
int sum(int a,int b){
    int s= a+b;
    return s;
}
int minimum(int a,int b){
    if (a>b)
    {
        return b;
    }
    
}
int sumofnnumbers(int n){
    
    int sum=0;
    
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
    
}

int factorial(int n){
    /*if(n==0){
        return 1;
    }
    else{
        return n* factorial(n-1);
    }
    
   int fact=1;
   for (int i = 1; i <= n; i++)
   {
    fact*=i;
   }
   return fact;
}
//PASS BY VALUE
int change(int x) {
    x=2*x;
    cout<<"x= "<<x<<endl;
}
int sumofdigits(int n){
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        n/=10;
        sum+=lastdigit;
    }
    return sum;
    
}*/
int factorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);

    return fact_n/(fact_r*fact_nmr);
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int r;
    cout<<"Enter r:";
    cin>>r;
    cout<<"Final Result is="<<ncr(n,r);
    
    /*int x=5;
    change(x);
    cout<<"x= "<<x<<endl;*/

   // text();
  /* int a,b;
   cout<<"Enter a: ";
   cin>>a;
   cout<<"Enter b: ";
   cin>>b;
   int n;
   cout<<"Enter n: ";
   cin>>n;*/

   //cout<<"Factorial of " << n <<" : "<< factorial(n)<<endl;
  // cout<<"Sum of numbers from 1 to n = "<<sumofnnumbers(n)<<endl;
   //cout<<"Minimum number among a and b is= "<<minimum(a,b)<<endl;
   //cout<<"Sum is: "<<sum(a,b)<<endl;
   /*
   cout<<"Product is: "<<product(a,b)<<endl;
   cout<<"Differentiation is: "<<subtract(a,b)<<endl;
   cout<<"Division is: "<<division(a,b)<<endl;
   int val=first();
   cout<<"Val= "<<val<<endl;
//CALCULATE SUM OF DIGITS OF A NUMBER.
cout<<"First Sum is: "<<sumofdigits(2356)<<endl;
cout<<"Next Sum is: "<<sumofdigits(1234)<<endl;*/

    return 0;
}
