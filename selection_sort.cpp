#include <iostream>
#include <string>
using namespace std;
int main()
{ /*
 //Q1
 In each iteration we find the index of minimum element in the unsorted part of array


 //Q2
array sorted in reverse order

// Q3
4 passes
 */
    // Q4
    int arr[] = {2, 5, 7, -7, 3};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    // insertionsort
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        a *= 10;
        a += arr[i];
    }
    cout << n;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            break;
        }
    }
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        b *= 10;
        b += arr[i];
    }
    cout << "Minimum sum is : " << a + b;

    // Q5
    string brr[] = {"jatin", "madhvi", "Papa", "mummy"};
    n = 4;
    for (int i = 0; i < n - 1; i++)
    {
        cout << brr[i] << " ";
    }
    // Bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}