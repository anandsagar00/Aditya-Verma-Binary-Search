//Search in the bitonic array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={8, 10, 20, 80, 100, 200, 400, 500, 3, 2, 1};
    int n=11;

    int low=0,high=n-1;
    int key=10;

//Find the max element , as of which we will get 2 sub arrays 1 is increasingly sorted , one is decreasingly sorted , so we will do binary search on both sides

    int ind_max_el=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(mid>0 && mid<n-1)
        {
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                ind_max_el=mid;
                break;
            }
            else if(arr[mid]>arr[mid-1])
            {
                low=mid+1;
            }
            else
            high=mid-1;
        }
        else if(mid==0 && arr[mid]<=arr[mid+1])
        {
            ind_max_el=mid;
            break;
        }
        else if(mid==n-1 && arr[mid]>=arr[mid-1])
        {
            ind_max_el=mid;
            break;
        }
    }

    bool flag=false;
    low=0;
    high=ind_max_el;
    //this is the binary_search in ascending order
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            cout<<"Element Found";
            flag=true;
            break;
        }
        else if(key>arr[mid])
        {
            low=mid+1;
        }
        else
        high=mid-1;
    }
    low=ind_max_el+1;
    high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            flag=true;
            cout<<"Element Found";
            break;
        }
        else if(key>arr[mid])
        {
            high=mid-1;
        }
        else
       low=mid+1;
    }
    if(!flag)
    cout<<"Element not found.\n";
}