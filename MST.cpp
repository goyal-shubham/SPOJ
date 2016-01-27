#include<iostream>

using namespace std;

class node
{
    public:

    int vertex;
    int weight;
    node * neighbor;
    node()
    {
        neighbor = NULL;
    }
};

class graph
{
    public:

    int no_vertex;
    node ** edge;
    graph(int data)
    {
        no_vertex = data;
        edge = new node*[no_vertex];
        for( int i = 0; i < no_vertex; i++)
        {
            edge[i] = NULL;
        }
    }

    int getVertex()
    {
        return no_vertex;
    }

    void insertEdge(int u, int v, int w)
    {
        insertEdge1(u,v,w);
        insertEdge1(v,u,w);
    }

    void insertEdge1( int u, int v, int w)
    {
        node * n = new node();
        node * temp = edge[u];
        if( temp == NULL)
        {
            n->vertex = v;
            n->weight = w;
            edge[u] = n;
            
        }
        else
        {
            while(temp->neighbor != NULL)
            {
                temp = temp -> neighbor;
            }
            
            n->vertex = v;
            n->weight = w;
            temp->neighbor = n;
        }
    }
};

void MST( int s, graph g, int vertex)
{
    long long int output = 0;
    bool visited[vertex];
    for( int i = 0; i < vertex; i++)
    {
        visited[i] = false;
    }
    visited[s] = 1; 
    for( int i = 0; i < vertex; i++)
    {
        int minV, minU;
        long long int minW = 10000000;
        int counter = 0;
        bool found = false;
        node * temp;
        for( int j = 0; j < vertex; j++)
        {
            if(visited[j] == true)
            {
                temp = g.edge[j];
                while(temp != NULL)
                {
                    if( visited[temp->vertex] == false)
                    {
                        counter = (temp->weight < minW)?1:0;
                        if(counter == 1)
                        {
                            found = true;
                            minW = temp->weight;
                            minV = temp->vertex;
                            minU = j;
                        }
                    }
                    temp = temp->neighbor;
                }
            }
        }
        if( found == true)
        {
            visited[minV] = true;
            output += minW;
        }
    }
    cout <<  output << endl;
}

int main()
{
    int n,m;
    cin >> n >> m;
    graph g(n);
    int u, v, w;
    for( int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        g.insertEdge(u-1, v-1, w);
    }
    MST( 0 , g,n);
}
