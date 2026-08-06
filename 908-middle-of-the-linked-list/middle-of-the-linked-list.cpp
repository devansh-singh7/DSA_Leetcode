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
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next; // 1-Step
            fast = fast->next->next;  // 2-Step
        }
        
        // As this prints when while break if while break then 2 cases asre their.
        // CASE 1: Fast is NULL so no iteration.
        // CASE 2: Fast->next is null that means fast pointer is in the last node.
        // That means slow is in the middle.

        // Explanation: If a runs at a speed of 4km/hrs and B runs at a speed of 2km/hrs.
        // If we make them race so when B will win the race then A have covered only half the race track.
        // Becasue speed of B is twice of A.

        return slow;  
    }
};