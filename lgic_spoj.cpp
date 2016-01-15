
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,x = 1,y=1;
    cin >> a;
    for(int i  = 1; i <= a; i++)
    {
        x = x * i;
        y *= 2;
    }
    cout << x+y-a << endl;
}
