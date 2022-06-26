// Find max element in a BITONIC array

// https://www.geeksforgeeks.org/find-the-maximum-element-in-an-array-which-is-first-increasing-and-then-decreasing/

// Increasing first and then decreasing

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {8, 10, 20, 80, 100, 200, 400, 500, 3, 2, 1};

    int n = 11;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - mid) / 2;

        if (mid > 0 && mid < n - 1)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                {
                    cout << arr[mid] << " ";
                    break;
                }
            else if (arr[mid - 1] > arr[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        else if(mid==0 && arr[mid] > arr[mid+1])
        {
            cout<<arr[mid]<<endl;
            break;
        }
        else if(mid==n-1 && arr[mid] > arr[mid-1])
        {
            cout<<arr[mid]<<endl;
            break;
        }
    }
}