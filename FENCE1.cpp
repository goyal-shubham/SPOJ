
#include<iostream>

using namespace std;

int main()
{
    float t;
    while(1)
    {
        cin >> t;
        if( t == 0)
        {
            break;
        }
        if( t >= 1 && t <= 10000)
        {
            float a;
            a = (t * t ) / (2 * 3.1415926); 
            printf("%.2f\n" , a );
        }
    }
}
