//TO FIND LARGEST ELEMENT AND SMALLEST ELEMENT
#include<iostream>
using namespace std;
int main(){
    int smallest=INT8_MAX;
    int largest=INT8_MIN;
    
    int marks[]={45,96,-9,75,4,-2};
    int size=6;
    for (int i = 0; i < size; i++)
    {
       smallest=min(marks[i],smallest);
       largest=max(marks[i],largest);
    }
    
    cout<<"The Smallest element of array: "<<smallest<<endl;
    cout<<"The Largest element of array: "<<largest<<endl;

    return 0;
}