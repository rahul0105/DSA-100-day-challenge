// Selection sort -> find the minimum element in the unsorted array and swap it with element at begining
#include <bits/stdc++.h>

using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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

    SelectionSort(arr, n);
    cout << "\nArray element after sorting " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}