
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int ng,nm;
        cout << endl;
        cin >> ng >> nm ;
        int g[ng] , m[nm];
        int a = 0, b = 0;
        for(int i = 0; i < ng; i++)
        {
            cin >> g[i];
            if(a < g[i])
            {
                a = g[i];
            }
        }
        for( int i = 0; i < nm; i++)
        {
            cin >> m[i];
            if( b < m[i])
            {
                b = m[i];
            }
        }
        if( a >= b)
        {
            cout << "Godzilla" << endl;
        }
        else
        {
            cout << "MechaGodzilla" << endl;
        }

    }
}
