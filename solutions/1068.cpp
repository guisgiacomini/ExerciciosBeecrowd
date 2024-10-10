#include <bits/stdc++.h>

using namespace std;

bool is_correct(string input);

int main()
{
    stack<char> myStack;
    string expressao;

    while(cin >> expressao)
    {
        if (is_correct(expressao))
        {
            cout << "correct" << endl;
        }
        else 
        {
            cout << "incorrect" << endl;
        }

    }

    return 0;
}

bool is_correct(string input)
{
    int length = input.length();
    stack<char> myStack;
    

    for (int i = 0; i < length; i++)
    {
        if (input[i] == '(')
        {
            myStack.push(input[i]);
        }

        if (input[i] == ')')
        {
            if (myStack.empty())
            {
                return false;
            }

            myStack.pop();
        }
    }

    if (!myStack.empty())
    {
        return false;
    }

    return true;

}