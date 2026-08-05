/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        // Slow - Fast Pointer Pattern
        
        if(!head || !head->next) return NULL; // Edge case

        ListNode *slow = head; 
        ListNode *fast = head;

        // 1. Traverse using a WHILE loop until fast reaches the end or a cycle is detected.
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next; // 1 step move.
            fast = fast->next->next; // 2 step move.

            // 2. Cycle Found
            if(slow == fast)
            {   // Find cycle entry node.
                slow = head;
                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                    // Meeting point of fast and slow here gives the node from which cycle has started.
                }
                return slow; // The start of the cycle
            }
        }
        return NULL; // No cycle found.
    }
};
