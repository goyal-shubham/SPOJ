#include<iostream>
#include<string>

using namespace std;


void stringInsert(int pos, char *n1, char *n2)
{
    char * n3= new char[50];
    int l1;
    int l2;
    int l3;
    l1=strlen(n1);
    l2=strlen(n2);
    cout<<n1<<endl<<n2<<endl;
    l3=l1+l2;
    for(    ;l1>=pos;l1--)
    {
        n1[l3]=n1[l1];
        l3--;
    }
    int i=0;
    while(n2[i] != '\0')
    {
        n1[pos]=n2[i];
        i++;
        pos++;
    }
    cout<<"final string is :  "<<n1<<endl;
}

void compString( char *n1 , char *n2)
{
    int i;
    int count;
    i = 0;
    count = 0;
    while(n1[i] != '\0' || n2[i] != '\0')
    {
        if(n1[i]==n2[i])
        {
            count++;
        }
        i++;
    }
    if(count==i)
        cout<<"strings are exactly equal";
    else
        cout<<"strings are not equal";
}

int main()
{    
    char * s1 = new char[50];
    char * s2 = new char[50];
    cout<<"enter first string";
    cin>>s1;
    cout<<"enter second string";
    cin>>s2;
    
    int position;
    cout<<"enter position in which you want to insert";
    cin>>position;
    cout<<"max size is : "<<s1.max_size() 
    stringInsert(position,s1,s2);
    compString(s1,s2);
}
