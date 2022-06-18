//Palindrome Linked List

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

    Where N is the total nodes in Linked List.
*/

#include <stack>

bool isPalindrome(LinkedListNode<int> *head) {

    // It stores the Linked List node value.
    stack<int> st;

    // Creating temporary Node.
    LinkedListNode<int> *temp = head;

    while (temp != NULL) {

        // Add the current node value to stack.
        st.push(temp->data);

        // Move current pointer to next node.
        temp = temp->next;

    }

    while (head != NULL) {

        // Get the top most element of stack.
        int top = st.top();
        st.pop();

        if (top != head->data) {
            return false;
        }

        head = head->next;

    }

    return true;

}
