//STARTED AT 7:53 A.M. ON 21ST JAN 2025 and studied till 10:00 but completed only 30 mins of video
#include<iostream>
using namespace std;
/*
int change_arr(int arr[],int size){  // PASS BY REFERENCE
    cout<<"Array in Function \n";
    for (int i = 0; i < size; i++)
    {
        arr[i]=2*arr[i];
    }
    
}*/
int main(){
    //int marks[4]={45,96,98,76};
    //marks[0]=100; //update
    // int size=4;
    //int marks[size];
   

    //cout<<marks[0];
    //cout<<"Size of Array: "<<sizeof (marks)<<" Bytes"<<endl; //IT WILL TELL U THE SIZE OF ARRAY IN BYTES WHERE 1 BOX= 4 BYTES
    //cout<<"Number of Elements in above Array: "<<sizeof (marks)/sizeof (int)<<endl;
    
    //HOW TO ADD VALUES OF ARRAY USING LOOPS
/*
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>marks[i];
    }
    
    //HOW TO ACCESS ARRAY USING LOOPS

    for (int i = 0; i < size; i++)
    {
        cout<<i<<" Element of an array: "<<marks[i]<<endl;
    }*/
    //FIND SMALLEST NUMBER/ELEMENT OF AN ARRAY.
/*
    int nums[]={45,4,-10,2,17,65}; //INDEXING STARTS WITH 0
    int size=6;
    int smallest_index=-1;
    int largest_index=-1;
    int smallest= INT8_MAX; //HERE ELEMENT IS DECLARED AS +INFINITY
    int largest=INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (nums[i]<smallest)
        {
            smallest=nums[i];
            smallest_index=i;
        }
    }
    cout<<"The smallest element of an array: "<<smallest<< " at Index: "<<smallest_index<< endl;

    for (int i = 0; i < size; i++)
    {
        if (nums[i]>largest)
        {
            largest=nums[i];
            largest_index=i;
        }
        
    }
    cout<<"The Largest element of an array: "<<largest<< " at Index: "<<largest_index<< endl;
     //2ND METHOD TO FIND SMALLEST NUMBER.
    /* for (int i = 0; i < size; i++)
     {
        smallest=min(nums[i],smallest);
     }
    cout<<"The smallest element of an array: "<<smallest<< endl;
     

    

    // PASS BY REFERENCE
    int arr[]={1,2,3};
    change_arr(arr,3);
    cout<<"Array in main function\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
*/


//LINEAR SEARCH ALGORITHM
    return 0;
}