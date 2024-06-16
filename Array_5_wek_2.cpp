#include <iostream>
#include <climits>
#include <vector>
using namespace std;
void q1(int arr[], int size, int num)
{
    int count = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > num)
            count++;
    }
    cout << "There are total of " << count << " elements greater than " << num << endl;
}

void q2(int arr[], int size)
{
    int max, max2, max3;
    max3 = max = max2 = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max3 = max2;
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3)
            max3 = arr[i];
    }
    cout << endl
         << "Three largest elements of the array are " << max << ", " << max2 << ", " << max3;
}
void q3(int arr[], int size)
{
    bool sorted = true;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            sorted = false;
        }
    }
    if (sorted == false)
        cout << "The array is not sorted" << endl;
    else
        cout << "The array is sorted" << endl;
}
void q4(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            sum += arr[i];
        else
            sum -= arr[i];
    }
    cout << "Final sum is " << sum;
}
void q5(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            arr[i] += 10;
        else
            arr[i] *= 2;
    }
}

void q6(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool check = true;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                continue;
            if (arr[i] == arr[j])

            {
                check = false;
                break;
            }
        }
        if (check)
            cout << arr[i] << "is unique";
    }
}

void q7(int arr[], int size)
{
    int palindrome = true;
    int a = arr[0];
    int b = arr[size - 1];
    while (a <= b)
    {
        if (arr[a] == arr[b])
        {
            continue;
            a++;
            b--;
        }
        else
            palindrome = false;
    }
    if (palindrome)
        cout << "It's a palindrome " << endl;
    else
        cout << "Not a Palindrome" << endl;
}
int main()
{
    int arr[] = {3, 5, 8, 9, 43, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Q1
    // Count the number of elements strictly greater than x.
    q1(arr, size, 5);

    // Q2
    // WAP to find the largest three elements in the array.

    // Q3
    // Check if the given array is sorted or not

    q3(arr, size);
    // Q4
    // Find the difference between the sum of elements at even indices to the sum of elements at odd indices

    q4(arr, size);
    // Q5
    // Given an array of integers, change the value of all odd indexed elements to its second multiple
    // and increment all even indexed values by 10.

    q5(arr, size);
    cout << "New changed array is : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // Q6
    // Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
    q6(arr, size);

    // Q7
    // If an array arr contains n elements, then check if the given array is a palindrome or not .
    q7(arr, size);

    // Q8
    // Here error is that nothing is signified in this function what has to be done ?
}