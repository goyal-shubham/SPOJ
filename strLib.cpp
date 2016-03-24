#include<iostream>

using namespace std;

int stringLength(char * n1)
{
    int count;
    count=0;
    for(;n1[count]!='\0';count++)
    {
    }
    return count;
}
int main()
{
    char * l1;
    cout<<"enter ur name";
    cin>>l1;
                int len;
    len=stringLength(l1);
    int count;
        count=0;
            for(;l1[count]!='\0';count++)
                    {
                            }
                cout<<"length is" <<count;
                cout<<"length from function is"<<len;
}
