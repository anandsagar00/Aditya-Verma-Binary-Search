
//FIND AN ELEMENT IN SORTED ROTATED ARRAY
//Explanation : https://www.youtube.com/watch?v=Id-DdcWb5AU&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=8


#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sorted array which is rorated 7 times

    int arr[] = {8, 9, 10, 15, 15, 15, 15, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7};
    int n=20;

    int high = n-1; // size-1
    int low = 0;

    int index_min=-1;//to store index of minimum element in array
    int key=15; // We will find the index of this element

    //First step is to find the index on minimum element
    //then depending on the element we will apply Binary Search on portion of the array

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        int next=(mid+1)%n;
        int prev=(mid-1+n)%n;

        if(arr[mid]<=arr[next] && arr[mid]<arr[prev])
        {
            index_min=mid;
            break;
        }
        else
        {
            if(arr[mid] >= arr[low] )
            {
                low=mid+1;
            }
            else if(arr[mid]<=arr[high])
            {
                high=mid-1;
            }
        }
    }

    //Now once we have the smallest element we will do binary search in the required array
    int index=-1;//to store index of the key

    if(key>=arr[index_min] && key<=arr[n-1])
    {
        //perform binary search on the half which has min element
        int low=index_min;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==key)
            {
                index=mid;
                break;
            }
            else if(key > arr[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    else
    {
        int low=0;
        int high=index_min-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==key)
            {
                index=mid;
                break;
            }
            else if(key > arr[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    if(index==-1)
    {
        cout<<"\nElement not found.\n";
    }
    else
    {
        cout<<"Element found"<<endl;
    }
    
}