#include<iostream>

using namespace std;

#define ANSWER_TO_LIFE 42

int main()
{
    int input;
    while(1)
    { 
        cin>>input;
        if(input!=ANSWER_TO_LIFE) 
        {
            cout<<input<<endl;
        }
        else break;
    }
    return 0;
}
