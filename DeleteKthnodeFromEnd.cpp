//DeleteKthnodeFromEnd
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

/*
    Time Complexity: O(N)
    Space Compexity: O(N)

    Where 'N' is the total nodes in Linked List.
*/

#include <vector>

LinkedListNode<int> *removeKthNode(LinkedListNode<int> *head, int K)
{
    if (head == NULL || K == 0)
    {
        return head;
    }

    // It stores all the node of Linked List.
    vector<LinkedListNode<int>*> nodeList;

    // Creating temporory node.
    LinkedListNode<int> *temp = head;

    // Iterating the Linked List.
    while (temp != NULL)
    {
        // Add current node to list.
        nodeList.push_back(temp);
        temp = temp->next;
    }

    // If head of Linked List is the Kth node.
    if (K == nodeList.size())
    {
        LinkedListNode<int> *next = head->next;
        head->next = NULL;
        head = next;
    }
    else
    {
        // Remove the Kth node from end.
        nodeList[nodeList.size() - K - 1]->next = nodeList[nodeList.size() - K]->next;
    }

    return head;
}