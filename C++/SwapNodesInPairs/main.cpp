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
    ListNode(int x, ListNode *next) : data(x), next(next)
    {

    }
};

class Solution
{
    public:
        ListNode* createListNode(int data)
        {
            ListNode* newNode = new ListNode();

            newNode -> data = data;
            newNode -> next = nullptr;

            return newNode;
        }
        ListNode* swapPairs(ListNode* head)
        {
            ListNode* dummy = new ListNode(-1);
            dummy -> next = head;

            ListNode* prev = dummy;
            while(head != nullptr && head->next != nullptr)
            {
                ListNode* first = head;
                ListNode* second = head -> next;

                //Swapping
                prev->next = second;
                first->next = second->next;
                second->next = first;

                //Reinitializing the head and prev for next swap
                prev = first;
                head = first->next;
            }

            return dummy->next;
        }
};

int main()
{
    Solution objSol = Solution();

    ListNode* root = objSol.createListNode(1);
    root -> next = objSol.createListNode(2);
    root -> next -> next = objSol.createListNode(3);
    root -> next -> next -> next = objSol.createListNode(4);

    ListNode* result = objSol.swapPairs(root);

    while(result != nullptr)
    {
        cout << result->data << "->";
        result = result->next;
    }

    return 0;
}