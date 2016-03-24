#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"total numbers =";
    cin>>n;
   //sanitize input.	
    if(n <= 0 )
    {
	exit(0);
    }
    
    if(n > 0)
    {
   // Use Malloc or Vector 
        int *a;
        a = (int*)malloc(sizeof(int) * n);
    
        cout<<"enter the numbers";
        cin>>a[0];
        int large = a[0];
        int small = a[0];
        int sum = a[0];
        for (int i = 1; i<n ;i++) 
        {
            cin>>a[i];
            sum = sum+a[i];
            if(large<a[i])
            {
                large = a[i];
            }   
    
            if(small>a[i])
            {
                small = a[i];
            }   
        }
         
        cout<<"average is "<< (sum/(float)n)<<"\n";
        cout<<"largest no. is " << large<<"\n";
        cout<<"smallest no. is "<< small<<"\n";
    }
}

// Cases in which this will not work
/*
1. Negative numbers ke liye large nahi aayega. INT_MIN, INT_MAX
2.  


*/

