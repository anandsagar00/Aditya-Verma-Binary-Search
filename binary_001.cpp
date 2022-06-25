//Binary Search Algorithm

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //sorted array
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    int h=19;//size-1
    int l=0;
    int key=7;
    int flag=0;

    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==key)
        {
            cout<<"Index of element is : "<<mid;
            flag=1;
            break;
        }
        else if(key>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    if(flag==0)
    cout<<"Element not found.\n";
}