#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> ans(10); // Maximum 9 words as per problem constraints
        string temp = "";
        int idx = 0;
        int count = 0;

        while (idx < s.size())
        {
            if (s[idx] == ' ')
            {
                int pos = temp[temp.size() - 1] - '0'; // Extracting the position from the word
                temp.pop_back();                       // Removing the position digit from the word
                ans[pos] = temp;                       // Storing the word in the correct position
                temp.clear();
                count++;
            }
            else
            {
                temp += s[idx];
            }
            idx++;
        }

        // Handle the last word
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        temp.clear();
        count++;

        // Construct the sorted sentence
        for (int i = 1; i <= count; i++)
        {
            temp += ans[i];
            temp += ' ';
        }
        temp.pop_back(); // Remove the last space

        return temp;
    }
};

int main()
{
    Solution solution;
    string s = "is2 sentence4 This1 a3";
    string result = solution.sortSentence(s);
    cout << result << endl; // Output: "This is a sentence"

    return 0;
}
