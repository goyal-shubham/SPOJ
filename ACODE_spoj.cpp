
#include<iostream>
#include<cstring>

#define max 5000

using namespace std;

unsigned long long int output[max] = {0};
string code;
long long int len;

int findDecodings(int i)
{
    if( i >= len) return 1;
    if(code[i] == '0') return 0;
    if(output[i]) return output[i];
    if( i + 1 < len && (code[i] == '1' || (code[i] == '2' && code[i+1] <= '6' )))
    {
        if(code[i+1] == '0')
        {
            output[i] = findDecodings(i+2);
        }
        else
        {
            output[i] = findDecodings(i+1) + findDecodings(i+2);
        }
    }

    else
    {
        if( code[i + 1] == '0')
        {
            output[i] = 0;
        }
        else
        {
            output[i] = findDecodings(i+1);
        }
    }

    return output[i];
}

int main()
{
    while(true)
    {
        cin >> code;
        if(code[0] == '0' )
        {
            break;
        }
        len = code.size();
        memset(output , 0 , sizeof output);
        cout << findDecodings(0) << endl;
    }
}
