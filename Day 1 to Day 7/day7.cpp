//BITWISE OPERATORS
#include<iostream>
using namespace std;
/*
bool power(int n){
        return n>0 && (n&(n-1))==0;
}*/
int reverse_Integer(int n){
    int reverse_num=0;
    while (n!=0){
        reverse_num=reverse_num*10+n%10;
        n=n/10;
    }
    return reverse_num;

}

int main(){
    /*int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"(a&b): "<<(a&b)<<endl;
    cout<<"(a|b): "<<(a|b)<<endl;
    cout<<"(a^b): "<<(a^b)<<endl;
    cout<<"Left Shift operator: "<<(10<<2)<<endl;
    cout<<"Right Shift operator: "<<(10>>1)<<endl;
    cout<<"5 - 6 * 2 = "<<(5-6*2)<<endl;
    cout<<"4 * 5 % 2 = "<<(4*5%2)<<endl;
    cout<<"Size of INT = "<<sizeof (int)<<endl;
    cout<<"Size of LONG INT = "<<sizeof (long int)<<endl;
    //unsigned contains only positive values
    //signed can contain both positive and negative integers

    //N IS POWER OF 2 OR NOT
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(power(n)){
        cout<<n<<" is a power of 2."<<endl;
    }
    else{
        cout<<n<<" is not a power of 2"<<endl;
    }*/

    //REVERSE THE INTEGER
    int n;
    cout<<"Enter the Integer which u need to reverse: ";
    cin>>n;
    int reversed_num=reverse_Integer(n);
    cout<<"The Reversed Integer of  "<<n<<"is : "<<reversed_num;

    return 0;
}