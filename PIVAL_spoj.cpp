
#include<iostream>

using namespace std;

int main()
{
    int count = 0;
    long long float a = -1,b, pi = 0, c = -1;
    while(count <= 33)
    {
        a = a + 2 ;
        if(count%2)
        {
            b = (4 / a) * c;
        }
        else
        {
            b = 4 / a;
        }
        pi = pi + b ;
        count++;
    }
    cout << pi;
    
}
