
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int i = 1;
    char total[100], more[100] , x[100] , y[100];
    while(i--)
    {
        cin >> total;
        cin >> more;
        int totalLen = strlen(total);
        int moreLen = strlen(more);
        while( moreLen != totalLen )
        {
            more[moreLen] = 0;
            moreLen++;
        }
        cout << total << more;
        int carry = 0;
        for( int i = 0; i < totalLen; i++)
        {
            cout << total[i] << " " << more[i];
            int temp = total[i] + more[i];
            cout << endl;
            carry = temp / 10;
            x[i] = temp % 10;
            cout << carry << " " << temp << endl;
        }
        x[i] = '\0';
        cout << x;
    }
}
