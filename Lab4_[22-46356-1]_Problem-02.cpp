//Problem-02, Linear search
#include<iostream>
using namespace std;
int main(){
    int A[50], num;
    int key;
    cout<<"Enter the size of arrya: ";
    cin>>num;
    cout<<"Enter the elements of array: ";
    for(int i=0; i<num; i++){
        cin>>A[i];
    }
    cout<<endl;
    cout<<"Enter Element of key to be Search:: ";
    cin>>key;
    for(int i=0; i<num; i++){
        if(key==A[i]){
            cout<<endl;
            cout<<"Found at: "<<i+1<<" number position";
            return 0;
        }
    }
    cout<<"Not found: ";
    return 0;
}