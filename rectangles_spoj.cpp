
#include<iostream>
#include<cmath>

using namespace std;

int getResult(int n)
{
    int total = 0;
    int root = 1;
    for( int i = 1; i <= n; i++)
    {
        root = sqrt(i);
        for( int j = 1; j <= root ; j++)
        {
            if( i % j == 0)
            {
                total++;
            }
        }
    }
    return total;
}

int main()
{
    int n;
    cin >> n;
    cout << getResult(n) << endl;
}
