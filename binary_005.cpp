// Number of times a SORTED ARRAY is ROTATED

// Explanation : https://www.youtube.com/watch?v=4WmTRFZilj8&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&flag=7&t=721s

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sorted array which is rorated 7 times

    int arr[] = {8, 9, 10, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 1, 2, 3, 4, 5, 6, 7};
    int n = 20;

    // Number of times an array is rotated depends on index of minimum element ( also known as pivot)
    // first technique is to do linear search
    // 2nd is to do BINARY SEARCH

    int high = n - 1; // size-1
    int low = 0;

    // 1.find the element is min or not , 2. which side to move

    // The min element is smaller than both its neighbours

    int index = -1;

    if (arr[low] < arr[high])
    {
        cout << "Array is sorted .\n";
    }
    else
    {
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            // taking the circular feel of array
            int next = (mid + 1) % n;
            int prev = (mid - 1 + n) % n;

            // here be careful about condition as the mid element has to be strictly less than prev but <= for next element to be smallest
            if (arr[mid] <= arr[next] && arr[mid] < arr[prev])
            {
                index = mid;
                break;
            }
            else
            {
                // We will travel towards the unsorted array
                //  If the start is less than equal to mid then the array is sorted otherwise not ( Aditya Verma 19:30)

                // checking if first half is sorted or not
                // if sorted then move towards unsorted array
                if (arr[low] <= arr[mid])
                {
                    low = mid + 1;
                }
                // checking if 2nd half is sorted or not
                else if (arr[mid] <= arr[high])
                {
                    high = mid - 1;
                }
            }
        }
        if (index != -1)
        {
            cout << "\nArray has been rotated " << n - index << " times.\n";
        }
    }
}