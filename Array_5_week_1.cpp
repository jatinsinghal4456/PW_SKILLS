#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Q1
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    cout << "Product of all the elements are : " << product << endl;

    // Q2
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    int max2 = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if ((max2 < arr[i]) && (arr[i] != max))
            max2 = arr[i];
    }
    cout << "The second maximum element is " << max2 << endl;

    // Q3
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "The minimum element is " << min << endl;

    // Q4
    bool repeat = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                repeat = true;
                break;
            }
        }
        if (repeat == true)
        {
            cout << "This array contains duplicate elments " << endl;
            break;
        }
    }
    /*
        // Q5
        // Finding smallest missing possitive element
        int missing = arr[0];
        bool miss = false;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == missing)
                missing++;
            else
            {
                cout << "Missing element is " << missing << endl;
                miss = true;
                break;
            }
        }
        if (miss == false)
            cout << "No missing element";
    */
    // Another method for question 5

    int missing = arr[0];
    bool miss = false;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            missing = arr[i - 1] + 1;
            miss = true;
            break;
        }
    }
    if (miss == true)
    {
        cout << "Missing is " << missing;
    }
    else
        cout << "No missing element found ";

    // Q6
    // The loop will counting from 0 to 48
}