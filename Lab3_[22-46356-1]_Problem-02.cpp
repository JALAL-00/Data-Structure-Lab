#include<iostream>
#include<string.h>
using namespace std;
int main(){
string conv;

cout<<"Enter a sample string (s): ";
getline(cin, conv);

int j;
cout<< "Enter a sample integer (j): ";
cin>>j;

int i=2;
for(;i<conv.length();i=i+3){
      if(int(conv[i])!=32){
           conv[i]=char(int(conv[i])+j);
    }
}
cout<<"converted string: ";
     for(int i=0;i<conv.length();i++){
           cout<<conv[i];
    }
return 0;
}