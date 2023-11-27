// Longest arthmatic subaaray
// problem -> An array that contains at least two integers and the differences between
//  consecutive integers are equal. for example [9,10], [3,3,3] and [9,7,5,3] are arithmetic
// arrays while [1,3,3,7], [2,1,2] and [1,2,4] are not arithmatic array.

// Rahul has an array ot N non-negative integers. The i-th integer ot the array is A. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.

// Approach
//  loop the array
//  1. maintain the previous differnce(pd)
// 2.cuurent arthematic subarray length(curr)
// 3.Max arthematic subarray length(ans)
#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int pd = arr[1] - arr[0];
    int curr = 2;
    int len = 0;
    for (int i = 2; i < n; i++)
    {

        if (pd == arr[i] - arr[i - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            curr = 2;
        }
        len = max(curr, len);
    }
    cout << len;
}

int main()
{
    int n;

    cout << "Enter the size of the array::" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter array element with size " << n << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    solve(arr, n);

    return 0;
}