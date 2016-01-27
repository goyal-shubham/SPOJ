#include<iostream>

using namespace std;

class subject
{
    public:
    string name;
    int time_solve;
    
};

class time
{
    public:
    int hh;
    int mm;
    void setTime()
    {

    }
};



int main()
{
    int subjects_no, employer_no, days;
    cin >> subjects_no >> employer_no >> days ;
    char **s;
    s = (char **)malloc(sizeof(sizeof(char*)) * subjects_no);
    for(int i = 0; i < subjects_no; i++)
    {
        s[i] = (char *)malloc(sizeof(char) * subjects_no);
    }
    for(int i = 0; i < subjects_no; i++)
    {
        cin >> s[i];
    }
}
