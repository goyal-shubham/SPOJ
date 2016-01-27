
#include<iostream>
#include<stack>


using namespace std;

char input[10000];
int len;

int main()
{
    int t;
    cin >> t;
    while ( t-- )
    {
        cin >> input;
        len = strlen(input);
        int a = 0;
        int acc = 1;
        stack<int> s;
        for( int i = 0; i <= len; i++)
        {
            if( input[i] == '32' )
            {
                cout << "i m here";
                s.push(a);
                cout << s.top();
            }   
            else
            {
                int temp =  input[i] - 48;
                a = temp + a*10;
            }


        }
    }
}
