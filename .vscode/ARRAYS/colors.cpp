#include <iostream>
using namespace std;

class Anuj
{
public:
    int arr[10] = {1, 6, 4, 7, 3, 7, 9, 4, 5, 0};

    void sortArray()
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }

    void displayArray()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Anuj myObj;

    cout << "Original array: ";
    myObj.displayArray();

    myObj.sortArray();

    cout << "Sorted array: ";
    myObj.displayArray();

    return 0;
}
