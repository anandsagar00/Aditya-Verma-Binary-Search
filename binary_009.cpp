// Find ceil of an element in a Sorted array

/*Given a sorted array arr[] of size N without duplicates, and given a value x.
ceil of x is defined as the smallest element K in arr[] such that K is greater than or equal to x.
*/

// If we get the element in the array then the element itself is it's floor as well as ceil

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 8, 10, 10, 12, 19};
    int n = 9;

    int key=15;

    int low=0;
    int high = n-1;

    int ceil_element=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        //If the middle elemnt is less than the key , then we will search on right part of the array
        if(arr[mid]<key)
        {
            low=mid+1;
        }
        //else If the middle elemnt is greater than the key , then we will search on left part of the array
        else if(arr[mid]>key)
        {
            ceil_element=arr[mid];
            high=mid-1;
        }
        else
        {
            ceil_element=arr[mid];
            break;
        }
    }
    cout<<"ceil element of "<<key<<" in array is : "<<ceil_element<<endl;

}