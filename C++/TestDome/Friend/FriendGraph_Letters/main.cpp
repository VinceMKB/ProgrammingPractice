#include <iostream>
using namespace std;
#include <vector>

class Friend
{
private:
    bool **adjMatrix;
    int num_of_vertex;

public:
    Friend(int num_of_vertex)
    {
        this->num_of_vertex = num_of_vertex;
        adjMatrix = new bool*[num_of_vertex];
        for (int i = 0; i < num_of_vertex; i++)
        {
            adjMatrix[i] = new bool[num_of_vertex];
            for (int j = 0; j < num_of_vertex; j++)
            {
                adjMatrix[i][j] = false;
            }
        }
    }

    // Use char inputs for nodes
    void addEdge(char i, char j)
    {
        int index_i = i - 'A';
        int index_j = j - 'A';
        adjMatrix[index_i][index_j] = true;
        adjMatrix[index_j][index_i] = true;
    }

    void toString()
    {
        for (int i = 0; i < num_of_vertex; i++)
        {
            char vertexLabel = 'A' + i;
            cout << vertexLabel << " : ";
            for (int j = 0; j < num_of_vertex; j++)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Use char inputs for nodes
    bool canBeConnected(char start, char goal)
    {
        int start_index = start - 'A';
        int goal_index = goal - 'A';
        vector<bool> visited(num_of_vertex, false);
        return DFS(start_index, goal_index, visited);
    }

    bool DFS(int current, int goal, vector<bool>& visited)
    {
        if (current == goal) return true;
        visited[current] = true;

        for (int i = 0; i < num_of_vertex; i++)
        {
            if (adjMatrix[current][i] && !visited[i])
            {
                if (DFS(i, goal, visited)) return true;
            }
        }
        return false;
    }

    ~Friend()
    {
        for (int i = 0; i < num_of_vertex; i++)
        {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
    }
};

int main()
{
    Friend objFriend(6);

    // Edges input using characters
    objFriend.addEdge('A', 'B');
    objFriend.addEdge('B', 'C');

    objFriend.toString();

    // Check connection using characters
    char start = 'A';
    char target = 'C';

    bool result = objFriend.canBeConnected(start, target);
    cout << "Is node " << start << " connected to node " << target << "? " << (result ? "Yes" : "No") << endl;

    return 0;
}
