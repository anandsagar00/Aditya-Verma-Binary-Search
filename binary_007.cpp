// SEARCH IN A NEARLY SORTED ARRAY

// Nearly sorted : An element supposed to be at (i)th position can be found out at (i-1)th position (i+1)th pos as well as (i)th position

//Explanation link : https://www.youtube.com/watch?v=W3-KgsCVH1U&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=9

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={10, 3, 40, 20, 50, 80, 70};

    int key=40;

    int n=7;

    int low=0 , high=n-1;

    int index=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            index=mid;
            break;
        }
        else if(mid-1 >=low && arr[mid-1]==key )
        {
            index=mid-1;
            break;
        }
        else if(mid+1 <= high && arr[mid+1]==key)
        {
            index=mid+1;
            break;
        }
        else if(key < arr[mid])
        {
            high=mid-2;
        }
        else
        {
            low=mid+2;
        }
    }
    if(index!=-1)
    {
        cout<<"Element found at : "<<index<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }

}