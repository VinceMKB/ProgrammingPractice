#include <iostream>
using namespace std;

struct Node {
    int value; // Tile number
    Node* next; // Pointer to the next node
    Node* prev; // Pointer to the previous node

    Node(int val) : value(val), next(nullptr), prev(nullptr) 
    {

    }
};

class Game 
{
    Node* head;
    Node* current;
    int current_position;

public:
    Game(int size_world, int pos_of_character) 
    {
        head = new Node(0);
        Node* temp = head;
        current_position = 0;

        for (int i = 1; i < size_world; ++i) 
        {
            temp->next = new Node(i);
            temp->next->prev = temp;
            temp = temp->next;
            if (i == pos_of_character) 
            {
                current = temp;
            }
        }
    }

    ~Game() 
    {
        while (head != nullptr) 
        {
            Node* next = head->next;
            delete head;
            head = next;
        }
    }

    void Jump_Left() 
    {
        // Make sure there are at least two tiles to the left
        if (current != nullptr && current->prev != nullptr && current->prev->prev != nullptr) 
        {
            Node* to_delete = current; // Tile to delete is the current one
            current = current->prev->prev; // Move the character two tiles to the left (over one tile)
            // Re-link the previous tile with the next one after the deleted tile
            to_delete->prev->next = to_delete->next;
            if (to_delete->next) 
            {
                to_delete->next->prev = to_delete->prev;
            }
            // If we are deleting the head, update it
            if (to_delete == head) 
            {
                head = to_delete->next;
            }
            delete to_delete; // Delete the tile where the character was
        }
        current_position = current -> value;
    }

    void Jump_Right() 
    {
        // Make sure there are at least two tiles to the right
        if (current != nullptr && current->next != nullptr && current->next->next != nullptr) 
        {
            Node* to_delete = current; // Tile to delete is the current one
            current = current->next->next; // Move the character two tiles to the right (over one tile)
            // Re-link the next tile with the previous one after the deleted tile
            to_delete->next->prev = to_delete->prev;
            if (to_delete->prev) 
            {
                to_delete->prev->next = to_delete->next;
            }
            delete to_delete; // Delete the tile where the character was
        }
        current_position = current -> value;
    }

    int getCharacterPosition()
    {
        return current_position;
    }

    void printGame() 
    {
        Node* temp = head;
        while (temp != nullptr) 
        {
            cout << (temp == current ? "[" : " ") << temp->value << (temp == current ? "]" : " ") << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Game objGame(9, 3);
    objGame.printGame(); // Initial game state

    objGame.Jump_Right();
    //objGame.printGame(); // Print game state after jump right
    cout << "Current Position is: " << objGame.getCharacterPosition() << endl;

    objGame.Jump_Right();
    //objGame.printGame(); // Print game state after the second jump right
    cout << "Current Position is: " << objGame.getCharacterPosition() << endl;

    objGame.Jump_Left();
    objGame.printGame(); // Print game state after jump left
    cout << "Current Position is: " << objGame.getCharacterPosition() << endl;

    cout << "Platformer linked List works!" << endl;

    return 0;
}
