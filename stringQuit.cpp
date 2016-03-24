#include<iostream>
#include<string>
#include<fstream>

using namespace std;
/*
void writeFile()
{

}

void readFile()
{

}*/
int main()
{
    string test;
    string line;
    fstream stringFile ("string.data", ios::out);
// vector<string>
// sstream
    while (true)
    {
        cin>>test;
    
        if(stringFile.is_open())
        {
            cout<<"file is open. test is =  "<< test << endl;
            stringFile<<test<<'\n';
        }

        if(test == "quit")
        {   
            stringFile.close();
            break;
        }

    }
    stringFile.open("string.data");
    if(stringFile.is_open())
    {
        while ( getline (stringFile,line) )
        {
            cout << line;
        } 
    }
}

// Fseek
// Fget
// Fput
// Fscanf
// fprintf
// EOF
