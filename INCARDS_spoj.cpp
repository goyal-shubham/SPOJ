#include<iostream>

using namespace std;

#define EACH(i,n) for(int i = 0; i < n; i++)
int dp[10][10];

class node
{
    public:

    int vertex;
    int cost;
    node * next;
    node()
    {
        next = NULL;
    }
};

class graph
{
    public:

    int no_vertex;
    node** edge;
    graph(int data)
    {
        no_vertex = data;
        edge = new node*[data];
        EACH(i,data)
        {
            edge[i] = NULL;
        }

    }

    void insertEdgeUndirected(int u, int v, int w)
    {               
        insertEdgeDirected(u,v,w);
        insertEdgeDirected(v,u,w);
    }       

    void insertEdgeDirected(int u , int v, int w)
    {
        node * temp = edge[u];
        node * temp2 = new node();
        if(edge[u] == NULL)
        {
            edge[u] = temp2;
            temp2->vertex = v;
            temp2->cost = w;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = temp2;
            temp2->vertex = v;
            temp2->cost = w;
        }

    }

    void getnode()
    {
        node * temp;
        for ( int i = 0; i < no_vertex; i++)
        {
            temp = edge[i];
            cout << i << " -> ";
            while( temp != NULL)
            {
                cout << temp->vertex << " (" << temp->cost << ") ";
                temp = temp->next;
            }
            cout << endl;
        }
        cout << endl;
    }

    int getDistance(int a, int b)
    {
        if( a == b)
        {
            return 0;
        }
        if( dp[a-1][b-1] != 0)
        {
            return dp[a-1][b-1];
        }
        cout << "reached here" << endl;
        int min1 = INT_MAX;
        node * temp = edge[a];
        while(temp != NULL)
        {
            if(temp->vertex == b)
            {
                min1 = min( min1 , temp->cost);
                dp[a-1][b-1] = min1;
            }
            else
            {
                min1 = min(temp->cost + getDistance(temp->vertex , b), min1);
                dp[a-1][b-1] = min1;
            }
            temp = temp->next;
        }
        cout << "a " << a <<" b " << b << "min1 " << min1 << endl;
        dp[a-1][b-1] = min1;
        return min1;
    }
};


int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int  p ,q;
        cin >> p >> q;
        graph g1(p + 1);
        EACH(i , q)
        {
            int u,v,w;
            cin >> u >> v >> w;
            g1.insertEdgeDirected(u,v,w);
        }
        cout << "loop ends" << endl;
        g1.getnode();
        int cost[p];
        memset(cost,0,p);
        memset(dp , 0 , sizeof(dp));
        int total = 0;
        for( int i = 2; i <= p; i++)
        {
            total += g1.getDistance(1,i) + g1.getDistance(i,1);
        }
        cout << "total" << total << endl;
        
    }
}
