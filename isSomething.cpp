#include<iostream>
#include<cctype>

using namespace std;
#define LOWER_CASE_LOW_LIMIT 65

class isSomething
{   
    public:

    int isUpper(int text)
    {
        for (int i = LOWER_CASE_LOW_LIMIT; i <= 90; i++)
        {
            if (text == i)
            {
                return true;
            }
        }

        return 0;
    }

    int isLower( int text)
    {
        for( int i = 97; i <= 122; i++)
        {
            if(text==i)
                return true;
        }
        return 0;
    }
   
    int isDigit ( int text)
    {
        for(int i = 48; i <= 57; i++)
        {
            if(text==i)
                return true;
        }
        return false;
    }

    int isAlNum( int text)
    {
        if(isUpper(text) || isLower(text) || isDigit(text))
            return true;
        return 0;
    }
    
    int isAlpha(int text )
    {
        if(isUpper(text) || isLower(text))
            return true;
        return 0;
    }

    int isSpace(int text)
    {
        if(text==32)
        {
            return true;
        }

        for(int i = 9; i<13; i++)
        {
            if(text==i)
            {
                return true;
            }
        }
        return 0;
    }
    
    int toLower ( int text)
    {  
        if(isUpper(text))
        {
            return text + 32;
        }
    }

    int toUpper ( int text )
    {
        if ( text >= 97 && text <= 122)
            text = text - 32;
        return text;
    }

    int isPrintable( int text)
    {
        if(text <= 126 && text >=32)
            return true;
        return 0;
    }

    int isGraphical( int text )
    {
        if(isPrintable(text) && text!=32)
        {
                return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    isSomething fnChecker;

    //while(1)
    {
        char in[50] = " M#y name is Shubham";
        //cout<<"Hi!!! Enter the value :"<<endl;
        //cin>>in;
        for(int i = 0; in[i] != '\0'; i++)
        {
            cout<<"lower case is : "<<char(fnChecker.toLower(in[i]))<<endl;
            cout<<"upper case is :"<<char(fnChecker.toUpper(in[i]))<<endl;
            if(fnChecker.isUpper(in[i]))
                cout<<"input is a upper case character"<<endl; 

            if(fnChecker.isLower(in[i]))
                cout<<"input is a lower case character"<<endl;

            if(fnChecker.isDigit(in[i]))
                cout<<"input is a decimal digit"<<endl;

            if(fnChecker.isAlpha(in[i]))
                cout<<"input is a alphabet"<<endl;

            if(fnChecker.isAlNum(in[i]))
                cout<<"input is alphanumeric"<<endl;

            if(fnChecker.isPrintable(in[i]))
                cout<<"input is printable"<<endl;
            if(fnChecker.isGraphical(in[i]))
                cout<<"input is graphical"<<endl;
        }
    }
}


