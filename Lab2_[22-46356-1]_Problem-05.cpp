//5. Initialize an integer type array of size 10 and show how many times each elements has been inputed.

#include <iostream>
using namespace std;

int main()
{
    int A, count, i, j;
    cout<<"Enter the size of first array: ";
    cin>>A;

    int Array[A], Frequently[A];

    cout<<"\nPlease enter the element of an array: ";
    for(i=0; i<A; i++)
    {
        cin >> Array[i];
        Frequently[i] = 0;
    }

    for(i=0; i<A; i++)
    {
        count = 1;
        for(j=i+1; j<A; j++)
        {
            /* If duplicate element is found */
            if(Array[i] == Array[j])
            {
                count++;
                Frequently[j] = -1;
            }
        }

        if(Frequently[i] == 0)
        {
            Frequently[i] = count;
        }
    }

    cout<<"\n\n **********  Frequently of all elements of an array  ********** \n\n";
    for(i=0; i<A; i++)
    {
        if(Frequently[i] != -1)
        {
            cout<< Array[i] <<" occurs = " << Frequently[i] << " times."<<endl<<endl;
        }
    }
    return 0;
}
