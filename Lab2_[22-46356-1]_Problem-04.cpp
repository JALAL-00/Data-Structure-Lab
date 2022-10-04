//4. Initialize an integer type array 'A' of size 10. Take an integer value and search how many times it is in the array.

#include <iostream>
using namespace std;

int main()
{
    int A, count = 0, num;

    cout<<"Enter the size of first array: ";
    cin>>A;

    cout<<"Please enter a number to search: ";
    cin>>num;

    int Array[A];
    cout<<"\nPlease enter the element of an array that store multiple of "<< num <<" is: ";
    for(int i=0; i<A; i++)
    {
        cin >> Array[i];
    }

    cout<<"\nThe array with multiple " << num << " is: ";
    for(int i=0; i<A; i++)
    {
        cout << Array[i] << " ";
    }

    for (int i = 0; i < A; i++)
    {
        if (Array[i] == num)
        {
            count++;
        }
    }

    cout << "\nThe number occurs "<< count <<" times in the array." << endl;
    return 0;
}
