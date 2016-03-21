#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        double a , a1, b1, c1;
        cin >> a >> a1 >> b1 >> c1;
        double b , c , x, r, area;
        x = 1.5 * a * a1;
        b = 2.0 * x/ (3.0 * b1);    
        c = 2.0 * x/ (3.0 * c1);
        r = a*b*c/(4.0*x);
        if( 9 * r * r >= a*a + b*b + c*c)
        {
            area = sqrt(9*r*r-(a*a+b*b+c*c));
        }
                                                    
        else 
        {
            area = 0.0;
        }
        cout << fixed << setprecision(3) << x << " " <<  2.0 * area / 3.0 << endl;
    }
}
