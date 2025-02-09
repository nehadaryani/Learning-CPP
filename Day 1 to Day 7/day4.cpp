#include<iostream>
using namespace std;
int main(){
    //PATTERNS
    /*int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n;j++){
            cout<<" "<<j;
        }
    cout<<endl;
    }
    
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-2b ; j++)
        {
            cout<<"* ";
        }
    cout<<endl;   
    }
    
   int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    for (int i = 0; i <=n; i++)
    {
        char ch='A';
        for (int j = 0; j<= n; j++)
        {
            cout<<" "<<ch;
            ch=ch+1;
        }
    cout<<endl;    
    }
    
    //for small alphabets
    int  n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        char ch='a';
        for (int j = 0; j <=n; j++)
        {
            cout<<" "<<ch;
            ch=ch+1;
        }
    cout<<endl;   
    }
    int  n;
    cout<<"Enter n: ";
    cin>>n;
    int num=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;  j < n; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
 cout<<"After Pattern= "<<num<<endl;
    int  n;
    cout<<"Enter n: ";
    cin>>n;
    char ch='A';
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++){
            cout<<ch<<" ";
            ch++;
        }
    cout<<endl;
    }
    int  n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < i+1; j++)
        {
            cout<<"* ";
        }
    cout<<endl;  
    }
   int  n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < i+1; j++)
        {
            cout<<" "<< i+1;
        }
    cout<<endl;  
    }
    */
   //PRINT THE BELOW PATTERN
   /*
A
BB
CCC
DDD
   int  n;
    cout<<"Enter n: ";
    cin>>n;
    //char ch='A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
         cout<<char('A'+ i-1)<<" ";
         
        }
    cout<<endl;
    }
    
   int  n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j;
        }
    cout<<endl;
        
    }
    int  n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j > 0; j--)
       {
        cout<<j;
       }
    cout<<endl;
    }
    
   int  n;
    cout<<"Enter n: ";
    cin>>n;
    int num=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<j<<" ";

        }
    cout<<endl;   
    }
    
   int  n;
    cout<<"Enter n: ";
    cin>>n;
    //char num='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j>0; j--)
        {
            cout<<char('A' + j-1)<<" ";
            
        }
    cout<<endl;
    }
    
   int  n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < n-i; k++)
        { 
            cout<< i+1;
        }
        cout<<endl;
    }
    
   int  n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < n-i; k++)
        {
            cout<<char('A' + i);
        }
    cout<<endl;
    }
    */
   /*
   int  n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i+1; k++)
        {
            cout<<k;
        }
        for (int j = i; j> 0; j--)
            {
                cout<<j;
            }
    cout<<endl;
    }
   int  n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<char('A' + k)<<" ";
        }
        for (int k = i-1; k >= 0; k--)
        {
            cout<<char('A' + k)<<" ";
        }
        
        cout<<endl;
    }*/
    //HOLLOW DIAMOND PATTERN
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";

        if(i!=0){
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";  
    }
    cout<<endl;
    }
    
//BOTTOM  PART OF PATTERN
 for (int i = 0; i < n-1; i++)
 {
    //spaces
    for (int j = 0; j < i+1; j++)
    {
        cout<<" ";
    }
    
    cout<<"*";

    if(i!=n-2){
        //spaces
        for (int j = 0; j < 2*(n-i)-5; j++)
    {
        cout<<" ";
    }
        cout<<"*";
    }
    cout<<endl;
 }
 
//HW: BUTTERFLY PATTERN
    return 0;
}
// this is not a good way to learn you should create a new file for every 
// program that you are practicing so that you can get the code when ever you need 
// on the go your code will be just a search away...