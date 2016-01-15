
#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

int main()
{
    int t;
    cin >> t;
    char str[400];
    while( t > 0 && t <= 100)
    {
        cin >> str;
        int length;
        length = strlen(str);
        stack<char> onp;
        for( int i = 0; i < length; i++)
        {
            if(isalpha(str[i]))
            {
                cout << str[i];
            }
            else if ( str[i] == ')')
            {
                cout << onp.top();
                onp.pop();
            }
            else if( str[i] != '(')
            {
                onp.push(str[i]);
            }
        }
        
        cout << endl;
        t--;
    }
}
