//2. Initialize 2 integer type arrays with different sizes and make a new array with the common elements between them.

#include<iostream>

using namespace std;

int main()
{
   int arr1[50], arr2[50], arr3[50], i, j, k=0, x, com;
   int m, n;
   cout<<"Enter the Size for First Array: ";
      cin>>m;
   cout<<"Enter Elements for First Array: ";
   for(i=0; i<m; i++)
      cin>>arr1[i];
   cout<<"\nEnter the Size for Second Array: ";
      cin>>n;
   cout<<"Enter Elements for Second Array: ";
   for(i=0; i<n; i++)
      cin>>arr2[i];

   for(i=0; i<m; i++)
   {
      for(j=0; j<n; j++)
      {
         if(arr1[i]==arr2[j])
         {
            com = 0;
            for(x=0; x<k; x++)
            {
               if(arr1[i]==arr3[x])
                  com++;
            }
            if(com==0)
            {
               arr3[k] = arr1[i];
               k++;
            }
         }
      }
   }
   cout<<"\nThe Common Elements are: ";
   for(i=0; i<k; i++)
      cout<<arr3[i]<<" ";

   cout<<endl;
   return 0;
}
