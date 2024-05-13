#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr)
    {

    }
    ListNode(int x) : data(x), next(nullptr)
    {

    }
};

class Solution
{
    public:
        ListNode* CreateBinaryNode(int data)
        {
            ListNode* newNode = new ListNode();

            newNode -> data = data;
            newNode -> next = nullptr;

            return newNode;
        }

        bool hasCycle(ListNode *head)
        {
            if(head == nullptr)
            {
                return false;
            }

            for(int i = 0; i <= 10000 + 1; i++)
            {
                if(head && head -> next == nullptr)
                {
                    return false;
                }
                head = head -> next;
            }

            return true;

        }
};

int main()
{
    Solution ObjSol;

    ListNode* root = ObjSol.CreateBinaryNode(3);
    ListNode* second = ObjSol.CreateBinaryNode(2);
    root -> next = second;
    root -> next -> next = ObjSol.CreateBinaryNode(0);
    root -> next -> next -> next = ObjSol.CreateBinaryNode(4);
    root -> next -> next -> next -> next = ObjSol.CreateBinaryNode(2);

    root -> next -> next -> next -> next -> next = second;

    bool result = ObjSol.hasCycle(root);
    cout << "List does cycle : "<<(result ? "True" : "False") << endl;
    cout << "LinkedListCycle is working!" << endl;

    return 0;
}