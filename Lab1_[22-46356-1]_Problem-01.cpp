#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the size of Array : ";
    cin>>num;
    int Arr[num];
    cout<<"Enter the elements of number: ";

    for(int i =0;i<num;i++){

        cin>>Arr[i];
    }
   
    for(int i=0;i<num;i++){
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Number in reverse order: ";

    for(int i = num-1;i>=0;i--){
    cout<<Arr[i]<<" ";
}


return 0;
}