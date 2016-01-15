
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n = 0;
    while(t-n)
    {
        n++;
        int sum , friends, total = 0;
        cin >> sum >> friends;
        int a[friends];
        for(int i = 0; i < friends; i++)
        {
            cin >> a[i];
            total = total + a[i];
        }
        cout << "Scenario #" << n << ":" << endl;
        if( total < sum )
        {
            cout << "impossible" << endl;
        }
        else
        {
            sort(a , a + friends);
            for( int i = friends-1; i >= 0; i--)
            {
                sum = sum - a[i];
                if( sum <= 0)
                {
                    cout << friends - i<< endl;
                    break;
                }
            }
        }

    }
}
