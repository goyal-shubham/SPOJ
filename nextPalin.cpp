
#include<iostream>
#include<cstring>

char input[1000005];

using namespace std;

void findNext()
{
    int len = strlen(input);
    if( len == 1)
    {
        input[0]++;
        return;
    }
    else if( len % 2)
    {
        int i = 1;
        int l = len/2;
        if(input[l + i] >= input[l - i])
        {
            input[l]++;
        }
        input[l + i] = input[ l - i];
        i++;
        while(i <= l)
        {
            input[l + i] = input[l -i];
            i++;
        }
    }
    else
    {
        int i = 0;
        int l2 = len/2;
        int l1 = len/2 - 1;
        if(input[l2 + i] >= input[l1 - i])
        {
            input[l1 - i]++;
        }
        
        input[l2 + i] = input[ l1 - i];
        i++;
        while( i < l2)
        {
            input[l2 + i] = input[l1 - i];
            i++;
        }
    }

}

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        cin >> input;
        findNext();
        cout << input << endl;
    }
}
