#include <iostream>
#include <string>

using namespace std;

int count(string str, char c)
{

    int counter = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{

    string str;
    getline(cin, str);

    char c;
    cin >> c;

    cout << count(str, c) << endl;

    return 0;
}