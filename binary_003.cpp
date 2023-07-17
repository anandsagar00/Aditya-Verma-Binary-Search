// First and Last occurence of an element

#include <iostream>
using namespace std;

int main()
{
    // sorted array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 15, 15, 15, 15, 16, 17, 18, 19, 20};

    int h = 19; // size-1
    int l = 0;
    int key = 15;
    int flag = 0;

    // Finding the first occurence of the Key

    int first=-1,last=-1;

    while (l <= h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==key)
        {
            first=mid;
            h=mid-1;
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
    if (first == -1)
    {
        cout << "\nElement not found.\n";
    }
    else
    {
        h = 19; // size-1
        l = 0;
        
        // Finding the last occurence of the Key

        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            if(arr[mid]==key)
            {
                last=mid;
                l=mid+1;
            }
            else if(key<arr[mid])
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
    }

    cout<<"First and Last occurence of "<<key<<" is : "<<first<<" and "<<last<<" respectively.\n";
}