#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while ( n != 0)
    {
        int a[n];
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(a[a[i] - 1] != (i + 1))
            {
                flag = 1;
            }
        }
        if( flag == 1)
        {
            cout << "not ambiguous" << endl;
        }
        else
        {
            cout << "ambiguous" << endl;
        }
        cin >> n;
    }
}
