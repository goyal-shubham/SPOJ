#include<iostream>

using namespace std;

int reverse( int num )
{
    int temp = 0;
    while(num/10 != 0 || num%10 != 0)
    {
        int reminder = num%10;
        temp = temp*10 + reminder;
        num = num/10;
    }
    return temp;
}

int main()
{
    int no_cases;
    int num1;
    int num2;
    cout<<"enter number of cases"<<endl;
    cin>>no_cases;
    while(no_cases)
    {
        int result;
        cout<<" enter numbers";
        cin>>num1>>num2;
        num1 = reverse(num1);
        num2 = reverse(num2);
        result = reverse(num1 + num2);
        cout<<result<<endl;
        no_cases--;
    }   
}
