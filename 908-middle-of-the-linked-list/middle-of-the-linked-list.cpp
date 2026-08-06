/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        // Fast & Slow Pointer Algorithm

        // TC: O(N)
        // SC: O(1)
        
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next; // 1-Step
            fast = fast->next->next;  // 2-Step
        }
        
        // As this will prints when while loop break. If while break then 2 cases are their.
        // CASE 1: Fast is NULL so no iteration. No linked list present.
        // CASE 2: Fast->next is NULL that means fast pointer reached the last node.
        // That means slow pointer is in the middle.

        // Explanation: If A runs at a speed of 4km/hrs and B runs at a speed of 2km/hrs.
        // If we make them race so when A will win the race, by that time B have covered only half the race track.
        // Becasue speed of A is twice of B.

        return slow;  
    }
};
