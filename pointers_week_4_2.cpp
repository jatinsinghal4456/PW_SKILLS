#include <iostream>
using namespace std;
void product(int *a, int *b)
{
    cout << "Product is " << *a * (*b);
}
int main()
{ // Q1
    int a = 5, b = 7;
    product(&a, &b);

    // Q2
    // Option 1 is correct

    // Q3
    // Correct option is 11, 10, 11

    // Q4
    // a gets value of b

    // Q5
    // The following code snippet is not correct as ptr is not given a valid addresss of any variable ;
}