
//Count of an element in sorted ARRAY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sorted array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 15, 15, 15, 15, 16, 17, 18, 19, 20};

    int h = 19; // size-1
    int l = 0;
    int key = 15;
    int flag = 0;
    int first_index=-1,last_index=-1;
    // Finding the first occurence of the Key

    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == key && (mid == 0 || arr[mid - 1] < key))
        {
            cout << "First Index of element is : " << mid;
            flag = 1;
            first_index=mid;
            break;
        }
        else if (key <= arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (flag == 0)
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
            if (arr[mid] == key && (mid == 19 /* last index or n-1 */ || arr[mid + 1] > key))
            {
                cout << "\nLast Index of element is : " << mid;
                last_index=mid;
                break;
            }
            else if (key >= arr[mid])
            {
                l=mid+1;
            }
            else
            {
                h = mid - 1;
            }
        }

        cout<<"\nCount of "<<key<<" in the array is "<<(last_index-first_index+1)<<endl;

    }
}