#include <iostream>
using namespace std;
int main()
{ // Q1
    int amount;
    cout << ("Enter the amount : ");
    cin >> amount;
    int n = amount;
    int n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0, n200 = 0, n500 = 0, n1000 = 0;
    switch (1)
    {
    case 1:
        n1000 = n / 1000;
        n -= n1000 * 1000;
    case 2:
        n500 = n / 500;
        n -= n500 * 500;

    case 3:
        n200 = n / 200;
        n -= n200 * 200;
    case 4:
        n100 = n / 100;
        n -= n100 * 100;
    case 5:
        n50 = n / 50;
        n -= n50 * 50;
    case 6:
        n20 = n / 20;
        n -= n20 * 20;
    case 7:
        n10 = n / 10;
        n -= n10 * 10;
    }
    // Q2
    // a= 15 , b= 15 , c= 0;

    // Q3
    // x and y are equal

    // Q4
    // First Character 1
    // Second Character 1

    // Q5
    // Value of t: false

    // Q6
    // N
}