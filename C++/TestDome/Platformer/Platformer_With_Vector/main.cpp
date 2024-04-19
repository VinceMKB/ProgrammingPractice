#include <iostream>
using namespace std;

#include <vector>

class Game
{
        vector<int> tiles;
        int position;

    public:

        Game(int size_of_world, int pos_of_character)
        {
            tiles = vector<int>(size_of_world, 1);
            position = pos_of_character;
        }

        int Jump_Left()
        {
            if(position > 1)
            {
                tiles[position] = 0; // Clear the current tile
                position -= 2; // Move two tiles to the left
                if(position > 0 && tiles[position] == 0) // Check if the next tile is empty
                {
                    position--; // Move one more tile to the left to skip the empty tile
                }
                tiles[position] = 1; // Place the character on the new tile
                return 0; // Success
            }
            else
            {
                return -1; // Error: Can't move left
            }
        }

        int Jump_Right()
        {
            if(position < tiles.size() - 2)
            {
                tiles[position] = 0; // Clear the current tile
                position += 2; // Move two tiles to the right
                if(position < tiles.size() - 1 && tiles[position] == 0) // Check if the next tile is empty
                {
                    position++; // Move one more tile to the right to skip the empty tile
                }
                tiles[position] = 1; // Place the character on the new tile
                return 0; // Success
            }
            else
            {
                return -1; // Error: Can't move right
            }
        }

        int getPosition() const
        {
            return position;
        }

        void print_world()const
        {
            for(int i = 0; i < tiles.size(); ++i)
            {
                if(tiles[i] == 1)
                {
                    cout << (i == position ?"[" : " ") << i << (i == position ? "]" : " ");
                    
                }
            }
            cout << endl;
            cout << "Current Position: " << getPosition() << endl;
        }




};

int main()
{   

    Game objgame(20, 3);

    objgame.print_world();

    if(objgame.Jump_Left() == -1)
    {
        cout << "Error: Can't move left!" << endl;
        return 1;
    }
    objgame.print_world();

    if(objgame.Jump_Right() == -1)
    {
        cout << "Error: Can't move right!" << endl;
        return 1;
    }
    objgame.print_world();

    if(objgame.Jump_Right() == -1)
    {
        cout << "Error: Can't move right!" << endl;
        return 1;
    }
    objgame.print_world();

    if(objgame.Jump_Right() == -1)
    {
        cout << "Error: Can't move right!" << endl;
        return 1;
    }
    objgame.print_world();

    cout << "Platformer is working" << endl;

    return 0;

}