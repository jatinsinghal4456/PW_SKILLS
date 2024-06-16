#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 3, 2, 3, -1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Q1
    int x = 10;
    int triplet = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    triplet++;
                }
            }
        }
    }
    cout << "Total number of triplets are : " << triplet;
    // Q2
    // Factorial of large number

    // First non repeating element
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << "The first non repeating element is " << arr[i] << endl;
    }
    // Move all the zroes to the end maintin relative ordering
    // Q4
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return 0;
}