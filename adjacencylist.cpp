#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

struct Edge
{
    char src, dest;
    int weight;
};

int main()
{
    vector <char> vertices = {'a', 'b', 'c' , 'd'};
    vector <Edge> edgeList = 
    {
        {'a', 'b', 7},
        {'a', 'c', 11},
        {'a', 'd', 4},
        {'b', 'a', 6},
        {'b', 'c', 9},
        {'c', 'a', 3},
        {'c', 'd', 5},
        {'d', 'a', 5},
        {'d', 'b', -4},
        {'d', 'c', 9}
    };
    
    map <char, vector<pair<char, int>>> adjList;
    
    for (const auto& edge : edgeList) 
    {
        adjList[edge.src].emplace_back(edge.dest, edge.weight);
    }

    for (const auto& pair : adjList) 
    {
        cout << pair.first << ": ";
        for (const auto& edge : pair.second) 
        {
            cout << edge.first << " (weight: " << edge.second << ") ";
        }
        cout << endl;
    }
    return 0;
}    