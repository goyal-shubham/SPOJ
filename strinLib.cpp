#include<iostream>
#include<string>

using namespace std;
/*
void appendString(char s1, char s2)
{
    string s3;
    s3 = s1+s2;
    cout<<"final string = "<<s3<<endl;
} */ 

int lengthString(char* s1)
{   
    cout<<"s1 is"<<*s1<<endl;
    int count=0;
    for ( ;*s1!='\0' ;s1++)
    {
        count++;
    }

    return count;
}

int main()
{
    char* l1;
    char* l2;
    cout<<"enter string to find length";
    cin>>l1;
    //cin>>l2;
        //cout<<"l1 = " <<*l1<<endl<<"l2 = "<<*l2<<endl;
    int len;
    len = lengthString(l1);
    cout<<"length of l1 is"<<len;
    //appendString(*l1,*l2);
}

