
#include<iostream>

using namespace std;

int findRectMat(int n, int m, int k)
{
    int count = 0;
    for( int i = k-1; i < m; i += k )
    {
        for(int j = k-1; j < n; j += k )
        {
            count++;
        }
    }
    return count;

}

int main()
{
    int n , m , k;
    cin >> n >> m >> k;
    cout << findRectMat(n,m,k);
}
