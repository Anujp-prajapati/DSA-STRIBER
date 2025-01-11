#include <iostream>
#include <vector>
using namespace std;

// Function to multiply a number with the digits in the result array
void multiply(vector<int> &result, int num)
{
    int carry = 0; // Initialize carry

    for (int i = 0; i < result.size(); ++i)
    {
        int product = result[i] * num + carry;
        result[i] = product % 10; // Store the last digit
        carry = product / 10;     // Update carry
    }

    // Add carry to the array
    while (carry)
    {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to calculate factorial
void factorial(int n)
{
    vector<int> result;
    result.push_back(1); // Initialize with factorial of 0 or 1

    for (int i = 2; i <= n; ++i)
    {
        multiply(result, i);
    }

    // Print the result (stored in reverse)
    for (int i = result.size() - 1; i >= 0; --i)
    {
        cout << result[i];
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is: ";
    factorial(n);

    return 0;
}
