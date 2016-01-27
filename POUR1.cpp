#include<iostream>

using namespace std;


int pourWater( int a, int b, int c)
{
    int x = a, y = 0; 
    int steps = 1, extra;
    while(x != c || y != c)
    {
        extra = min(x, b - y);
        x -= extra;
        y += extra;
        steps++;
        if( x == c || y == c)
        {
            return steps;
        }
        if( x == 0)
        {
            x = a;
            steps++;
        }
        if( y == b)
        {
            y = 0;
            steps++;
        }
    }
    return steps;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b , a%b);
}

int main()
{
    int a, b, c, t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        if( c > a && c > b)
        {
            cout << "-1" << endl;
        }
        else if( c % gcd(a,b) != 0)
        {
            cout << "-1" << endl;
        }
        else if( c == b || c == a)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << min(pourWater(a,b,c) , pourWater(b,a,c)) << endl;
        }
    }
}
