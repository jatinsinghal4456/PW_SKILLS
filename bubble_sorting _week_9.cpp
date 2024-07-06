#include <iostream >
#include <algorithm>
using namespace std;
void sort_dec(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}
int main()
{
    int arr[] = {2, 5, 7, 3, 2, 0};
    int n = 6;
    //
    /*
    Q1
        It is stable sort
        It involves swapping of adjacent elements
        After each iteration,
        the greatest element is placed at he end of the array

    // Q2
        [1, 2, 5, 4, 3, 6]

    // Q3
       When the array is sorted in increasing order

*/
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // Q4
    sort_dec(arr, 6);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Almost sorted  ?
    bool flag = true;
    // Method 1
    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //             continue;
    //         if (arr[j] > arr[i])
    //             count++;
    //     }
    //     int actualidx = n - count - 1;
    //     if (actualidx == 0)
    //     {
    //         if (arr[i] != arr[actualidx + 1] && arr[i] != arr[actualidx])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }

    //     if (actualidx == n - 1)
    //     {
    //         if (arr[i] != arr[actualidx - 1] && arr[i] != arr[actualidx])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    //     else
    //     {
    //         if (arr[i] != arr[actualidx + 1] && arr[i] != arr[actualidx - 1] && arr[i] != arr[actualidx])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    // }

    // Method 2
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            i++;
        }
    }
    bool check = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            check = false;
            break;
        }
    }
    if (flag)
    {
        cout << "They array was almost sorted" << endl;
    }
    else
        cout << "They array was not almost sorted" << endl;
    return 0;
}