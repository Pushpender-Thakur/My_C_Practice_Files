// https://www.hackerrank.com/challenges/game-of-thrones/problem

#include <iostream>

using namespace std;

int main(void)
{
    string str;

    bool isPossible = true;

    cin >> str;

    int length = str.length();

    if (length != 1)
    {
        int count[26] = {};

        for (int i = 0; i < length; i++)
        {
            count[str[i] - 'a']++;
        }

        if (length % 2 == 0)
        {
            for (int i = 0; i < 26; i++)
            {
                if (count[i] % 2 != 0)
                {
                    isPossible = false;
                    break;
                }
            }
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < 26; i++)
            {
                if (count[i] % 2 != 0)
                {
                    if (flag == true)
                    {
                        isPossible = false;
                        break;
                    }
                    else
                    {
                        flag = true;
                    }
                }
            }
        }
    }

    if (isPossible == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
}