
// Minimum absolute difference element in a sorted array

// Reference : https://www.callicoder.com/minimum-difference-element-in-sorted-array/#:~:text=Given%20an%20array%20of%20integers,'5'%20is%20the%20minimum.

//Video : https://www.youtube.com/watch?v=3RhGdmoF_ac&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=15

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 10, 19, 272, 280, 300, 312, 345, 350, 400};
    int n = 12;

    // 2 codition : a. Key is present , b. Key not present

    // If key is present in array then difference is 0

    int key = 275;

    int low = 0, high = n - 1;

    int diff = -1;

    if (arr[0] >= key)
    {
        cout << "Min difference is " << abs(key - arr[0]);
    }
    else if (key >= arr[n - 1])
    {
        cout << "Min difference is " << abs(key - arr[n - 1]) << endl;
    }
    else
    {

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key)
            {
                diff = 0;
                break;
            }
            else if (key > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        //at the end of binary search the low and high points to the neighbours of the key 
        // we are just checking the min difference from the element at lower index as well as higher index 

        cout << "Min difference is " << min(abs(key - arr[low]), abs(key - arr[high]))<<endl;
    }
}