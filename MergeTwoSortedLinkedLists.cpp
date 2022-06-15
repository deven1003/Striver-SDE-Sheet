#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
/*
        Time Complexity - O(N + M)
        Space Complexity - O(N + M)

        Where N and M are the number of nodes in both lists respectively.
*/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {
    if(!first)
    {
        return second;
    }
    if(!second)
    {
        return first;
    }

    if((first -> data) < (second ->data))
    {
        first -> next = sortTwoLists(first -> next, second);
        return first;
    }
    else
    {
        second -> next = sortTwoLists(first, second -> next);
        return second;
    }
}

