//Next alphabet in the sorted array of alphabet

//PS : https://www.geeksforgeeks.org/smallest-alphabet-greater-than-a-given-character/

//this problem is related to ceil of an element in sorted array (with little variation)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[]={'a','c','f','h'};

    int n=4;

    int low=0,high=n-1;

    char key = 'f';

    char ans=0;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid] <= key)
        {
            low=mid+1;
        }
        else
        {
            ans=arr[mid];
            high=mid-1;
        }
    }

    if(ans==0)
    {
        cout<<"No next alphabet is there in the array for alphabet "<<key<<endl;
    }
    else
    cout<<"The next alphabet of "<<key<<" in array is : "<<ans<<endl;

}