
#include<iostream>

using namespace std;

int findLCS( string seq1, string seq2)
{
    int length1 = seq1.length();
    int length2 = seq2.length();
    int LCS[length1 + 1][length2 + 1];
    for( int i = 0 ; i <= length1; i++)
    {
        LCS[i][0] = 0;
    }
    for( int j = 1; j <= length2; j++)
    {
        LCS[0][j] = 0;
    }
    for ( int i = 1 ; i <= length1; i++)
    {
        for ( int j = 1; j <= length2 ; j++)
        {
            if ( seq1[i] == seq2[j])
            {
                LCS[i][j] = LCS[i-1][j-1] + 1;
            }
            else if (LCS[i-1][j] >= LCS[i][j-1])
            {
                LCS[i][j] = LCS[i-1][j]; 
            }
            else
            {
                LCS[i][j] = LCS[i][j-1];
            }
        }
    }
    return LCS[length1 ][length2];
}


int editDistance(string str1, string str2)
{
    int m = str1.length();
    int n = str2.length();
    int distance[m + 1][n + 1];
    for( int i = 0 ; i <= m; i++)
    {
        distance[i][0] = 0;
    }
    for( int j = 1; j <= n; j++)
    {
        distance[0][j] = 0;
    }
    for ( int i = 1 ; i <= m; i++)
    {
        for( int j = 1; j <= n; j++)
        {
                if(str1[i-1] == str2[j-1])
                {
                    distance[i][j] = distance[i-1][j-1];
                }

                else
                {
                    distance[i][j] = distance[i-1][j-1] + 1;
                }
           
            
            if( m > n)
            {
                distance[i][j] = min ( distance[i-1][j] + 1 , distance[i][j] );
            }
            if ( 1)
            {
                distance[i][j] = min ( distance[i][j] ,distance[i][j-1] + 1 );
            }

            cout << distance[i][j] << '\t';
        }
        cout << endl;
    }

    return distance[m][n];
}

int main()
{
    string str1 = "shubham";
    string str2= "shubha";
    /*for( int i = 0 ; i < n; i++)
    {
    }
    cout << str1 << endl;
    for( int i = 0; i < m; i++)
    {
    }
    cout << str2 << endl;
*/
    int i = findLCS(str1 , str2);
    i = editDistance( str1, str2);
    cout << i;

}

