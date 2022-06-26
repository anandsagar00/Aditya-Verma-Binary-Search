//Search in a row wise and column wise sorted matrix

//Reference : https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/

//Video reference link : https://www.youtube.com/watch?v=VS0BcOiKaGI&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=20&t=304s

#include<bits/stdc++.h>
using namespace std;

int main()
{                                //  ⬇ 
     int arr[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };


    // we will point at the top-rightmost element of an array (as shown above , and for more reference refer video of Aditya Verma)

    int r=4;//rows
    int c=4;//cols

    int i=0;
    int j=c-1;

    int key=39;

    bool flag=false;
    while(i<r && j>=0)
    {
        if(key == arr[i][j])
        {
            flag=true;
            break;
        }
        else if(key > arr[i][j])
        {
            //if the key is greater than the current element , then move down
            i++;
        }
        else if(key<arr[i][j])
        {
            //if the key is less than the current element , then move left
            j--;
        }
    }

    if(flag)
    {
        cout<<"Element present.\n";
    }
    else 
    {
        cout<<"Element not present.\n";
    }
    
}