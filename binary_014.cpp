
// Peak element ( Array is not sorted ) , // Find any-one peak element of the array

// Problem Statement : https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/

// Video Reference : https://www.youtube.com/watch?v=OINnBJTRrMU&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=17

// Video Reference (MIT) :  https://www.youtube.com/watch?v=HtSuA80QTyo , http://courses.csail.mit.edu/6.006/spring11/lectures/lec02.pdf

/*

Input: array[]= {5, 10, 20, 15}
Output: 20
The element 20 has neighbours 10 and 15,
both of them are less than 20.

Input: array[] = {10, 20, 15, 2, 23, 90, 67}
Output: 20 or 90
The element 20 has neighbours 10 and 15,
both of them are less than 20, similarly 90 has neighbours 23 and 67.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 15, 2, 23, 90, 67};

    int n = 7;

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - mid) / 2;

        if (mid > 0 && mid < n - 1)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                cout << arr[mid] << " ";
            else if (arr[mid - 1] > arr[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        else if(mid==0)
        {
            if(arr[0]>arr[1])
            cout<<arr[0]<<" ";
            else 
            cout<<arr[1]<<" ";
            break;
        }
        else if(mid==n-1)
        {
            if(arr[n-1]>arr[n-2])
            {
                cout<<arr[n-1]<<" ";
            }
            else
            cout<<arr[n-2]<<" ";
            break;
        }
    }
}