#include <iostream>
using namespace std;

struct Node {
    int value; // Tile number
    Node* next; // Pointer to the next node
    Node* prev; // Pointer to the previous node

    Node(int val) : value(val), next(nullptr), prev(nullptr) {}
};

class Game 
{
    Node* head;
    Node* current;
    int current_position;

public:
    Game(int size_world, int pos_of_character) {
        head = new Node(0);
        Node* temp = head;
        current_position = 0;

        for (int i = 1; i < size_world; ++i) {
            temp->next = new Node(i);
            temp->next->prev = temp;
            temp = temp->next;
            if (i == pos_of_character) {
                current = temp;
                current_position = i;
            }
        }
    }

    ~Game() {
        while (head != nullptr) {
            Node* next = head->next;
            delete head;
            head = next;
        }
    }

    void Jump(bool isRight) 
    {
        if (current == nullptr) return;
        Node* nextNode = isRight ? current->next : current->prev;
        if (nextNode == nullptr || (isRight ? nextNode->next : nextNode->prev) == nullptr) return;

        Node* to_delete = current;
        current = isRight ? nextNode->next : nextNode->prev;

        current_position = current -> value;

        // Re-link the nodes
        if (isRight) {
            to_delete->next->prev = to_delete->prev;
            if (to_delete->prev) {
                to_delete->prev->next = to_delete->next;
            }
        } else {
            to_delete->prev->next = to_delete->next;
            if (to_delete->next) {
                to_delete->next->prev = to_delete->prev;
            }
        }

        // If we are deleting the head, update it
        if (to_delete == head) {
            head = to_delete->next;
        }

        delete to_delete;
    }

    int getCharacterPosition()
    {
        return current_position;
    }

    void printGame() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << (temp == current ? "[" : " ") << temp->value << (temp == current ? "]" : " ") << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Game objGame(9, 3);
    objGame.printGame(); // Initial game state

    bool move_r = true;
    bool move_l = false;

    objGame.Jump(move_r);
    objGame.printGame(); // Print game state after jump right
    cout << "Current Position is: " << objGame.getCharacterPosition() << endl;

    objGame.Jump(move_r);
    objGame.printGame(); // Print game state after the second jump right
    cout << "Current Position is: " << objGame.getCharacterPosition() << endl;

    objGame.Jump(move_r);
    objGame.printGame(); // Print game state after jump left
    cout << "Current Position is: " << objGame.getCharacterPosition() << endl;


    objGame.Jump(move_l);
    objGame.printGame();
    cout << "Current Position is: " << objGame.getCharacterPosition() << endl;

    
    objGame.Jump(move_l);
    objGame.printGame();
    cout << "Current Position is: " << objGame.getCharacterPosition() << endl;


    cout << "Platformer linked List works!" << endl;

    return 0;
}
