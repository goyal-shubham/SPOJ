#include<iostream>

using namespace std;

// for worst case -  
void bubbleSort ( int * a , int first , int last )
{
    int counter = 0;
    while(a[counter] != '\0')
    {
        for ( int j = last ; j > counter ; j--)
        {
            int temp;
            if(a[j]<a[j-1])
            {
                temp = a[j-1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
        counter++;
    }   
    cout<<endl<<"by bubble sort";
    for(int i =0 ; i <= last; i++)
    {
        cout<< a[i] <<'\t';
    }
}

void insertionSort ( int * a, int last)
{
    int i = 1;
    while( i <= last )
    {
        int value;
        value = a[i];
        int j = i;
        while( j>=1 )
        {
            if(value < a[j-1])
            {
                a[j] = a[j-1];
                a[j-1] = value;
            }
            j--;
        }   
        
        i++;
    }
    cout<<endl<<"By insertion sort";
    for(int k =0 ; k <= last; k++)
    {
        cout<< a[k] << '\t';
    }
}

void selectionSort( int * a , int last )
{
    int temp;
    for ( int i = 0; i <= last ; i++)
    {
        int minimum = i;
        for( int j = i ; j <= last ; j++)
        {
            if( a[j] < a[minimum])
            {
                minimum = j;
            }
            cout<<minimum;
        }
        temp = a[i];
        a[i] = a[minimum];
        a[minimum] = temp;
//        cout<<minimum;
    }

    cout<<endl<<"Selection sort is : ";
    for(int k =0 ; k <= last; k++)
    {
        cout<< a[k] << '\t';
    }
}

int main()
{
    int a[8] ;
    cout<<"insert 8 no.";
    for( int i = 0 ; i < 8 ; i++)
    {
        cin>>a[i];
    }
    
    bubbleSort(a, 0 ,7);
    cout<<"insert 8 no.";
    for( int i = 0 ; i < 8 ; i++)
    {
        cin>>a[i];
    }
    
    insertionSort(a , 7);
    cout<<"insert 8 no.";
    for( int i = 0 ; i < 8 ; i++)
    {
        cin>>a[i];
    }
    
    selectionSort(a,7);
}
