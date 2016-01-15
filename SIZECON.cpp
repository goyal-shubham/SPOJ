
#include<iostream>
using namespace std;
int main()
{
    int t,a,r=0;
    cin>>t;
    for( int i = 0; i < t; i++)
    {
        cin >> a;
        if( a > 0)
        {
            r += a;
        }
    }
    cout << r;
}
