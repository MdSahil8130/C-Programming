// // Online C++ compiler to run C++ program online
// /* Online C++ Compiler and Editor */
// #include <iostream>
// #include <bits/stdc++.h>
// #include <list>
// #include <unordered_map>

// using namespace std;

// class graph
// {
// public:
//     unordered_map<int, list<int>> adj;

//     void addedge(int u, int v, bool direction)
//     {
//         adj[u].push_back(v);
//         if (direction == 0)
//         {
//             adj[v].push_back(u);
//         }
//     }

//     void printAdjList()
//     {
//         for (auto i : adj)
//         {
//             cout << i.first << "->";
//             for (auto j : i.second)
//             {
//                 cout << j << ",";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     int n;
//     cout << "No of nodes" << endl;
//     cin >> n;

//     int m;
//     cout << "No of edges" << endl;
//     cin >> m;

//     graph g;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         g.addedge(u, v, 0);
//     }

//     g.printAdjList();

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;
    void addegde(int u, int v, bool direction)
    {

        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        g.addegde(u, v, 0);
    }

    g.print();

    return 0;
}