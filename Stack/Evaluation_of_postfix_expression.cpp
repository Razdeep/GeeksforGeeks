// https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression/0
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string text;
        cin >> text;
        stack<int> st;
        for (int i = 0; i < int(text.size()); ++i)
        {
            if (text[i] >= '0' && text[i] <= '9')
                st.push(text[i] - '0');
            else
            {
                int a, b;
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                int c = 0;
                if (text[i] == '+')
                    c = a + b;      
                else if (text[i] == '*')
                    c = a * b;
                else if (text[i] == '/')
                    c = b / a;
                else
                    c = b - a;                
                st.push(c);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}