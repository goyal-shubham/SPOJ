#include<iostream>

using namespace std;

int solution[105];
int p,c,m;

class Data
{
    public:

    int guess[105];
    int count[105];
    int hit;
    int match;
}game[105];

bool findSolution(int x)
{
    for( int i = 0; i < m; i++)
    {
        if(game[i].hit < 0 || game[i].hit > p - x || game[i].match < 0 || game[i].match > p - x)
        {
            return false;
        }
    }
    if( x == p)
    {
        return true;
    }
    for( int i = 0; i < c; i++)
    {
        solution[x] = i;
        for( int j = 0; j < m; j++)
        {
            if(game[j].guess[x] == c)
            {
                game[j].hit--;
            }
            if(game[j].count[i]-- > 0)
            {
                game[j].match--;
            }
        }
        if(findSolution(x+1))
        {
            return true;
        }
        for(int j = 0; j < m; j++)
        {
            if(game[j].guess[x] == c)
            {
                game[j].hit++;
            }
            if(++game[j].count[i] > 0)
            {
                game[j].match++;
            }
        }
    }
    return false;
}

void startGame()
{
    memset(game,0,sizeof(game));
    cin >> p >> c >> m;
    for(int i = 0; i < m; i++)
    {
        for( int j = 0; j < p; j++)
        {
            int x;
            cin >> x;
            game[i].guess[p] = x - 1;
            game[i].count[x - 1]++;
        }
        cin >> game[i].hit >> game[i].match;
        game[i].match += game[i].hit;
    }

    if( findSolution(0))
    {
        for( int i = 0; i < p; i++)
        {
            if( i > 0)
            {
                cout << " ";
            }
            cout << solution[i] + 1;
        }
        cout << endl;
    }
    else
    {
        cout << "You are cheating!" << endl ;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        startGame();
    }
}
