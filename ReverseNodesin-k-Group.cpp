//Reverse Nodes in k-Group

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
/*  

    Time Complexity : O(L)
    Space Complexity : O(L / K)
    
    Where L is the number of nodes in the Linked-List.
    Where K is the minimum block size from the array B.

*/

Node *reverseKElements(Node *head, int n, int b[], int idx) {
    // Base case: List is empty or entire block array have been considered.
    if (head == NULL || idx >= n) {
        return head;
    }

    // K will be the size of the current block.
    int K = b[idx];

    // Just move to the next block if size of the current block is zero.
    if (K == 0) {
        return reverseKElements(head, n, b, idx + 1);
    }

    Node *cur = head, *prev = NULL, *ahead = NULL;

    // Variable to keep track of the number of nodes reversed in the current block.
    int cnt = 0;

    // Reverse nodes until end of list is reached or current block has been reversed.
    while (cur != NULL && cnt < K) {
        ahead = cur->next;
        cnt++;
        cur->next = prev;
        prev = cur;
        cur = ahead;
    }

    // Reverse the next block.
    head->next = reverseKElements(ahead, n, b, idx + 1);
    return prev;
}

Node * getListAfterReverseOperation(Node *head, int n, int b[]) {
    // If linked list is empty, return head of the linked list.
    if (head == NULL) {
        return NULL;
    }

    // Calling reverseKElements function to modify the given linked list.
    head = reverseKElements(head, n, b, 0);

    // Return the head of the linked list.
    return head;
}