#include <iostream>

using namespace std;
int main()
{
    /*
// Q1
inplace sorting algorithm needs no extra space
it requires O (1) or O (log n)

// Q2
selection sort when  cost of swapping is concern
*/
    // Q3
    // Use ubble sort technique
    int arr[] = {4, 6, 9, 2, 0};
    int m = 5;
    int n = m / 2;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // Q4
    // Return k^th smallest element of array using bubble sort
    int k = 2;
    for (int i = 0; i < m - k + 1; i++)
    {
        for (int j = 0; j < m - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // Or do selection sort upto k
    // only k passes required
    for (int i = 0; i < k; i++)
    {
        int min = arr[i];
        int minidx = -1;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }
    cout << arr[k - 1];
}