#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,x1 = 1, y1 = 0;
    string s;
    cin >> n >> s;
    int a = s.length();
    int x = 1, y = 0;
    for( int i = a-1; i >= 0; i--)
    {
        x = x1;
        y = y1;
        if(s[i] == 'D')
        {
            x1 = x + y;
            y1 = y - x;
        }
        else
        {
            x1 = x - y;
            y1 = x + y;
        }

    cout << x1 << " " << y1 << endl;
    }

}
