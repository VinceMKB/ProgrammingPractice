#include <iostream>
using namespace std;

#include <vector>
#include <list>
#include <string>
#include <map>

class Friend
{

    private:

        bool ** adjMatrix;
        int num_of_vertex;

    public:

        Friend(int num_of_vertex)
        {
            this -> num_of_vertex = num_of_vertex;
            adjMatrix = new bool* [num_of_vertex];

            for(int i = 0; i < num_of_vertex; i++)
            {
                
                adjMatrix[i] = new bool[num_of_vertex];
                for(int j = 0; j < num_of_vertex; j++)
                {

                    adjMatrix[i][j] = false;

                }

            }
        }

        void addEdge(int i , int j)
        {
            
            adjMatrix[i][j] = true;
            adjMatrix[j][i] = true;

        }

        void removeEdges(int i, int j)
        {

            adjMatrix[i][j] = false;
            adjMatrix[j][i] = false;
            
        }

        void toString()
        {
            
            for(int i = 0; i < num_of_vertex; i++)
            {
                char Vertex_Label = 'A' + i;
                cout << Vertex_Label << " : ";

                for(int j = 0; j < num_of_vertex; j++)
                {

                    cout << adjMatrix[i][j] << " ";

                }

                cout << "\n";

            }

        }

        bool isConnected(int start, int target)
        {

            vector<bool> visited(num_of_vertex, false);

            return DepthFirstSearch(start, target, visited);

        }

        bool DepthFirstSearch(int current, int target, vector<bool>& visited)
        {
            
            if(current == target)
            {
                return true;
            }

            visited[current] = true;

            for(int i = 0; i < num_of_vertex; i++)
            {
                if(adjMatrix[current][i] && !visited[i])
                {
                    if(DepthFirstSearch(i, target, visited))
                    {
                        return true;
                    }
                }
            }
            return false;

        }

        ~Friend()
        {

            for(int i = 0; i < num_of_vertex; i++)
            {
                
                delete[] adjMatrix[i];

            }

            delete[] adjMatrix;
        }


};

int main()
{

    Friend objFriend(6);

    objFriend.addEdge(0, 1);
    objFriend.addEdge(0, 2);
    objFriend.addEdge(1, 2);
    objFriend.addEdge(2, 0);
    objFriend.addEdge(2, 3);
    objFriend.addEdge(3, 4);
    objFriend.addEdge(4, 3);
    objFriend.addEdge(4, 5);
    objFriend.addEdge(5, 0);

    objFriend.toString();

    int start = 0;
    int target = 5;

    bool result = objFriend.isConnected(start, target);
    cout << "Is node "<< start << " connected to node " << target << "? " << (result ? "Yes" : "No") << endl;
    
    cout << "Friend Graph is working" << endl;

    return 0;

}