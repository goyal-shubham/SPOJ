
#include<iostream>

using namespace std;

int main()
{   
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int male[n] , female[n];
        for( int i = 0; i < n; i++)
        {
            cin >> male[i];
        }
        for( int i = 0; i < n; i++)
        {
            cin >> female[i];
        }
        sort(male, male + n);
        sort(female, female + n);
        int hotBond = 0;
        for( int i = 0; i < n; i++)
        {
            hotBond = hotBond + ( male[i] * female[i] );
        }
        cout << hotBond << endl;
    }


}
