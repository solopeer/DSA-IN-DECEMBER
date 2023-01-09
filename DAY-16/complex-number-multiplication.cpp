// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to multiply Complex
// Numbers with just three
// multiplications
void print_product(int a, int b,
                   int c, int d)
{
    // Find value of prod1, prod2 and prod3
    int prod1 = a * c;
    int prod2 = b * d;
    int prod3 = (a + b) * (c + d);

    // Real Part
    int real = prod1 - prod2;

    // Imaginary Part
    int imag = prod3 - (prod1 + prod2);

    // Print the result
    cout << real << " + " << imag << "i";
}

// Driver Code
int main()
{
    int a, b, c, d;

    // Given four Numbers
    a = 2;
    b = 3;
    c = 4;
    d = 5;

    // Function Call
    print_product(a, b, c, d);
    return 0;
}
