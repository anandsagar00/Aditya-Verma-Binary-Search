
//Binary search in a Array sorted in DESCENDING ORDER

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    int low=0;
    int high=19; //size-1
    int flag=0;
    int key=7;


    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==key)
        {
            flag=1;
            cout<<"Element found"<<mid;
            break;
        }
        else if(key>arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(!flag)
    cout<<"Element not found.\n";
}