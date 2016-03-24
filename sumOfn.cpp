#include<iostream>

using namespace std;

int sumof( int n)
{
    int sum = 0;
    for( int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    return sum;
}

int sumofR ( int n)
{
    if( n == 0)
        return 0;
    else
        return sumofR( n - 1) + n;
}

int main()
{
    int n;
    int result;
    cout<<"enter n : ";
    cin>>n;
    result = sumof( n );
    cout<<result<<endl;
    result = sumofR( n);
    cout<<result<<endl;
}
