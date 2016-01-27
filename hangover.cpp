
#include<iostream>

using namespace std;

int main()
{
    float len;
    cin >> len;
    while(len != 0)
    {
        if( len == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            float i = 1;
            float temp = 0;
            while( temp <= len)
            {
                if( temp == len)
                {
                    break;
                }
                i++;
                temp = temp + (1 / i);
            }

            cout << i - 1 << " card(s)" << endl;
            cin >> len;
        }
    }
}
