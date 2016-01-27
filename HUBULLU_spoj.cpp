#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , a;
        cin >> n >> a;
        if( a == 0)
        {
            cout << "Airborne wins." << endl;
        }
        else
        {
            cout << "Pagfloyd wins." << endl;
        }
    }
}
