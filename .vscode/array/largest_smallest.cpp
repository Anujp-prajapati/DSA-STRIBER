// Find the largest and smallest element in an array
#include <iostream>
using namespace std;
int main()
{
    int n;
    int array[n];
    cout << "enter the sixe of an array" << endl;
    cin >> n;
    cout << "enter the elements in an array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int smallest = array[0];
    int largest = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    cout << "the smallest is" << smallest << endl;
    cout << "the largest number is " << largest << endl;

    return 0;
}