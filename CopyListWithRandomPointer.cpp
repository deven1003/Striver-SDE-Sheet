//Copy List with Random Pointer

#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/
/*
    Time complexity: O(N)
    Space complexity: O(N)

    Where 'N' is the number of nodes in the list.
*/

#include <unordered_map>

LinkedListNode<int> *cloneRandomListHelper(LinkedListNode<int> *head, unordered_map<LinkedListNode<int> *, LinkedListNode<int> *> &visitedHash)
{
    if (head == NULL)
    {
        return NULL;
    }

    /*
        If we have already processed the current node, 
        then we simply return the cloned version of it.
    */
    if (visitedHash.find(head) != visitedHash.end())
    {
        return visitedHash[head];
    }

    // Create a new node with the label same as old node. (i.e. copy the node).
    LinkedListNode<int> *node = new LinkedListNode<int>(head->data);

    /*
        Save this value in the hash map. This is needed
        since there might be loops during traversal due 
        to randomness of random pointers and this would help us avoid them.
    */
    visitedHash.insert(make_pair(head, node));

    /* 
        Recursively copy the remaining linked list
        starting once from the next pointer and then
        from the random pointer. Thus we have two independent
        recursive calls. Finally we update the next and 
        random pointers for the new node created.
    */
    node->next = cloneRandomListHelper(head->next, visitedHash);
    node->random = cloneRandomListHelper(head->random, visitedHash);

    return node;
}

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{

    // HashMap which holds old nodes as keys and new nodes as its values.
    unordered_map<LinkedListNode<int> *, LinkedListNode<int> *> visitedHash;

    return cloneRandomListHelper(head, visitedHash);
}
