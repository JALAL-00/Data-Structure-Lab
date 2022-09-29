#include<iostream>
using namespace std;
void func(int a,int b)
{
    int x;
    cin>>x;
    int Arr1[x];
    for(int i=0;i<x ;i++)
    {
        cin>>Arr1[i];
    }

   cout<<endl;
    for(int j=0;j<x;j++)
    {

       for(int i=a;i<=b;i++)
        {
        if(i%2!=0&& Arr1[j]==i)
        cout<<i<<" ";
        }
    }
}
int main()
{


   int a,n;
    cin>>a>>n;


    func(a,n);
}
