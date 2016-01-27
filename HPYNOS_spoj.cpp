#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int arr[1000];

int findResult(long long int n)
{ 
    int count = 0;
    while(n != 1)
    {
        int x = 0;
        while( n > 0)
        {
            x += pow(n%10 , 2);
            n = n/10;
        }
        n = x;
        if( arr[n] == 0)
        {
            count++;
            arr[n] = 1;
        }
        else
        {
            return -1;
        }
    }
    return count;
}

int main()
{
    long long int n;
    int a = 32;
    while(a--)
    {
        memset(arr, 0, 1000);
        cin >> n;
        cout << findResult(n) << endl;
    }
}
