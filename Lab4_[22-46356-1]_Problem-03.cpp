//Problem-03, Binary Search
#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, num, l, h, mid;
    cout<<"Enter 10 Elements : ";
    for(i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter Element to be Search: ";
    cin>>num;
    l = 0;
    h = 9;
    mid = (l+h)/2;
    while(l <= h)
    {
        if(arr[mid]<num)
            l = mid+1;
        else if(arr[mid]==num)
        {
            cout<<endl;
            cout<<"The number "<<num<<" found at Position: "<<mid+1;
            cout<<endl;
            break;
        }
        else
            h = mid-1;
            mid = (l+h)/2;
    }
    if(l>h){
        cout<<endl;
        cout<<"The number "<<num<<" is not found in given Array ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}