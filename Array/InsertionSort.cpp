// insert an element from unsorted array to its correct position in sorted array
#include <bits/stdc++.h>

using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0) // compare untill cuurent is less than next element
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
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

    cout << "Array element before sorting " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    InsertionSort(arr, n);
    cout << "\nArray element after sorting " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}