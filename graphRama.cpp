#include<iostream>

using namespace std;


int sum(int a)
{
    return a*(a+1)/2;
}
int main()
{
    int m , n;
    cin >> n >> m;
    int i = 0;
    int loop = 1;

    if( m > (n-1)*n/2)
    {
        cout << n;
    }
    else if( m < n)
    {
        if( m > 0)
        {
            cout << "2";
        }
    }
    else
    {
        while(n)
        {
            i = i + n;
            if(m <= i)
            {
                cout << loop << endl;
                exit(0);
            }
            else
            {
                loop++;
            }
            n ;
        }
    }
}
