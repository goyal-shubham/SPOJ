#include<iostream>

using namespace std;

class myString
{
    char * a;

    public:
    
    myString(string s1)
    {
        a =  (char*) malloc (sizeof(char) * s1.size());
        for(int i = 0; i<s1.size() ; i++)
        {
            a[i]=s1[i];    
        }
        a[s1.size()]='\0';
    }

    void printString()
    {
        cout<<a;
    }

    //completed  
    int stringLength()
    {
        int len;
        for(len = 0; a[len]!='\0'; len++){}
        return len;
    }

    //completed
    char * concatString(myString m1)
    {
        int j = m1.stringLength(); 
        return nConcatString(m1, j);
    }


    char * searchChar(int s)
    {
        int i;
        for(i = 0; a[i]!='\0';i++)
        {
            if(int(a[i]) == s)
            {
                cout<<"position is : "<< i+1<<endl ;
                return &(a[i]);
            }
        }

        return NULL;
    }

    int stringCompare(myString s1)
    {
        int i;
        int count = 0;
        for(i = 0; a[i] != '\0' ||s1.a[i]!='\0';i++)
        {
            if(a[i]==s1.a[i])
            {
                count++;
            }
            else if(a[i]>s1.a[i])
            {
                cout<< a <<" is greater than "<<s1.a<<endl;
                return 1;
            }
            else
            {
                cout<<a<<" is smaller than "<<s1.a<<endl;
                return -1;    
            }
        }
       /* if(a[i]== '\0' && s1.a[count]=='\0' )
        {
            cout<<"strings are equal"<<endl;
            return 0;
        }
        */
        return 0;
    }

    char * stringCopy(char *s)
    {
        int i;
        s = (char *) malloc(sizeof(char) * stringLength());
        for(i=0; a[i]!='\0'; i++)
        {
            s[i]=a[i];
        }
        s[i]='\0';
        return s;
    }
    
    char * nConcatString(myString ms1, int num)
    {
        int i;
        int size;
        char *b;
        i = stringLength();
        size = i + num;
        int var = 0;
        b = (char*) malloc(sizeof(char) * size);
        for(int k=0; k<size; k++)
        {   
            if(k < i)
            {
                b[k] = a[k];
            }
            else
            {
                b[k] = ms1.a[var];
                var++;
            }
        }

        b[size]='\0';
        a = b;
        return a;
    }
    
    // Recheck this one.
    int nstringCompare(myString s1, int num)
    {
        int i;
        int count = 0;
        for(i = 0; i<num ;i++)
        {
            if(a[i]==s1.a[i])
            {
                count++;
            }
            else if(a[i]>s1.a[i])
            {
                cout<< a <<" is greater than "<<s1.a<<endl;
                return 1;
            }
            else
            {
                cout<<a<<" is smaller than "<<s1.a<<endl;
                return -1;
            }
        }
       /* if(count==i && i>0)
        {
            cout<<"strings are equal"<<endl;
        }*/
        return 0;
   }

    char * searchLastChar(int c)
    {
        int i;
        for(i = stringLength() ; i>=0; i--)
        {
            if(int(a[i-1])== c)
            {
                cout<<"Last position is : "<< i<<endl ;
                return &a[i];
            }
        }
       /* if(i<0)
        {
            cout<<" Character not found"<<endl;
        }*/
        return NULL;
    }

    // This will be redone after we know how to code sets.
    int cspanString(myString ms2)
    {
        int j;
        int found = 0;
        for(j=0; a[j]!='\0' && found!=1; j++)
        {
            int i;
            i=0;
            while(ms2.a[i]!='\0')
            {
                if(ms2.a[i]==a[j])
                {
                    cout<<"Read "<<j<<" charcter to reach first common character"<<endl;
                    found = 1;
                }
                i++;
            }
        }
   
        return j;
    }

    char * strpbrkString(myString ms2)
    {
        int i;
        int j;
        int found = 0;
        for(j=0; a[j]!='\0' && found!=1; j++)
        {
            i=0;
            while(ms2.a[i]!='\0')
            {
                if(ms2.a[i]==a[j])
                {
                    found = 1;
                }
                i++;
            }
        }

        return &(a[j-1]);
    }

};

int main()
{
    int option;

    do
    {
        string sourceStr ;
        string destStr ;
 
        cout<<"Give input for string 1 : ";
        cin>>sourceStr;
        cout<<"Give input for string 2 : ";
        cin>>destStr;
        myString source(sourceStr);
        myString dest(destStr);

        cout<<endl<<"select the function to perform "<<endl
            <<" 1. Find length strlen() "<<endl
            <<" 2. concat both string strcat()"<<endl
            <<" 3.Find postion of a character"<<endl
            <<" 4.compare both the string"<<endl
            <<" 5. copy to a new string"<<endl
            <<" 6. strncat "<<endl
            <<" 7. strncmp"<<endl
            <<" 8. last occurance of any char strrchr"<<endl
            <<" 9. strcspan"<<endl
            <<"10. strpbrk"<<endl
            <<"11. exit"<<endl
            <<"Enter the choice and press enter"<<endl;
        cin>>option;

        switch(option)
        {

            case 1:
                //begins strlen / completed
                int length;
                length = source.stringLength();
                cout<<"length of "<<sourceStr<< " is "<<length<<endl;
                break;
            
            case 2:
                //Begins strcat

                 cout<<"concatinated result is : "<<source.concatString(dest)<<endl;
                break;

            case 3:
                //Begins strchar  
                char c1;
                char *test;
                cout<<"enter the character you want to find position of"<<endl;
                cin>>c1;
                test = source.searchChar(c1);
                if(test==NULL)
                    cout<<"charcter not found"<<endl;
                else
                    cout<<"first position found is "<<test<<endl;
                break;

            case 4:
                //Begins strcmp
                int compareResult;
                compareResult = source.stringCompare(dest);
                cout<< " compare result "<< compareResult<<endl;
                break;

            case 5:
                //begins strcpy
                char *s3;
                s3 = source.stringCopy(s3);
                cout<<"copied string is "<<s3<<endl;
                break;

            case 6:
                //begins strncat
                int num1;
                cout<<"enter number of characters to concatinate from dest to source : ";
                cin>>num1;
                cout<<" n concatinated result is "<<source.nConcatString(dest , num1)<<endl;
                break;

            case 7:
                //begins strncmp
                int num2;
                cout<<"enter number of characters to comapre from dest and source";
                cin>>num2;
                int result;
                result = source.nstringCompare(dest , num2);
                cout<<" compare result "<< result<<endl;
                break;

            case 8:
                char int1;
                cout<<"enter the character you want to find position of"<<endl;
                cin>>int1;
                char *b1;
                b1 = source.searchLastChar(int1);
                break;

            case 9:
                // This is not done.
                int cspanResult;
                cspanResult = source.cspanString(dest);
                break;

            case 10:
                // This is not done.
                char *pbrk;
                pbrk = source.strpbrkString(dest);
                cout<<" first occurance is "<<*pbrk;
                break;
            
            case 11:
            default:
                cout<<"wrong choice... please enter again";
                return 1;
        }

    }while (1);

}
