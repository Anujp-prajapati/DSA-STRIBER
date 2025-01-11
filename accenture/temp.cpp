#include <iostream>
#include <string>
#include <cctype>

int extractNumberFromString(const std::string &str)
{
    std::string numStr;

    for (char ch : str)
    {
        if (std::isdigit(ch))
        {
            numStr += ch;
        }
    }

    return numStr.empty() ? 0 : std::stoi(numStr);
}

int main()
{
    std::string testString1 = "abc123def";
    std::string testString2 = "abc456def";

    std::cout << extractNumberFromString(testString1) << std::endl; // Output: 123
    std::cout << extractNumberFromString(testString2) << std::endl; // Output: 456

    return 0;
}
