//Problem - 01, #bubble sort using Array
#include<iostream>
using namespace std;
int main(){

    int arr[50], num, i, j, mute;
    cout<<"Enter the size of array: ";
    cin>>num;
    cout<<"Enter the elements you want to short: ";
    for(i=0; i<num; i++)
        cin>>arr[i];

    for(i=0; i<num-1; i++)
    {
        for(j=0; j<num-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                mute = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = mute;
            }
        }
    }
    cout<<endl;
    cout<<"Array Sorted Successfully"<<endl;
    cout<<endl;

    cout<<"The New sorted array is: ";
    for(i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
