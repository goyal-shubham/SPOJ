
#include<iostream>

using namespace std;

int main()
{
    int num = 0, dem = 0;
    int n , t;
    cin >> t;
    while(t--)
    {
        cin >>  n;
        int loop = 0;
        int count = 0;
        int nu , d;
        while( count != n)
        {
            loop++;
            if( loop % 2)
            {
                num = loop;
                dem = 1;
                for(int i = 0; i < loop; i++)
                {
                    if( count != n)
                    {
                        nu = num - i;
                        d = dem + i;
                        count++;
                    }
                }
            }
            else
            {
                num = 1;
                dem = loop;
                for( int i = 0; i < loop; i++)

                {
                    {
                        if(count != n)
                        {
                            nu = num + i;
                            d = dem - i;
                            count++;
                        }
                    }
                }
            }
        }
        cout << "TERM " << n << " IS " << nu << "/" << d << endl;
    }
}
