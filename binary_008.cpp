// Find floor of an element in a Sorted array

/*Given a sorted array arr[] of size N without duplicates, and given a value x.
Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x.
Find the index of K(0-based indexing).*/

// If we get the element in the array then the element itself is it's floor as well as ceil

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 8, 10, 10, 12, 19};
    int n = 9;

    int key=5;

    int low=0;
    int high = n-1;

    int floor_element=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        //If the middle elemnt is less than the key , then we will search on right part of the array
        if(arr[mid]<key)
        {
            floor_element=arr[mid];
            low=mid+1;
        }
        //else If the middle elemnt is greater than the key , then we will search on left part of the array
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            floor_element=arr[mid];
            break;
        }
    }
    cout<<"Floor element of "<<key<<" in array is : "<<floor_element<<endl;

}