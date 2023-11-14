#include <bits/stdc++.h>
#include <string>
using namespace std;

int PostFixResult(string input)
{
    stack<int> s;

    for (int i = 0; i < input.size(); i++)
    {

        if (isdigit(input[i]))
            // TODO:
            s.push(input[i] - '0');
        else
        {
            int val1 = s.top();
            s.pop();
            int val2 = s.top();
            s.pop();
            switch (input[i])
            {
            case '+':
                s.push(val2 + val1);
                break;
            case '-':
                s.push(val2 - val1);
                break;
            case '*':
                s.push(val2 * val1);
                break;
            case '/':
                s.push(val2 / val1);
                break;
            }
        }
    }
    return s.top();
}

int main()
{
    string input;
    cout << "Pls INput The String: ";
    cin >> input;
    cout << "postfix Result: " << PostFixResult(input);
}
