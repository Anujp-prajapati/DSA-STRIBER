#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubsetXOR(vector<int> &A, int N)
{
    int maxXOR = 0;
    int maxElements = N / 2; // Maximum number of elements that can be chosen

    // Iterate through all subsets of size 1 to maxElements
    for (int i = 1; i <= maxElements; ++i)
    {
        vector<bool> v(N);
        fill(v.begin(), v.begin() + i, true); // Set first i elements to true

        do
        {
            int currentXOR = 0;
            for (int j = 0; j < N; ++j)
            {
                if (v[j])
                {
                    currentXOR ^= A[j];
                }
            }
            maxXOR = max(maxXOR, currentXOR);
        } while (prev_permutation(v.begin(), v.end())); // Generate next combination
    }

    return maxXOR;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    cout << maxSubsetXOR(A, N) << endl;
    return 0;
}