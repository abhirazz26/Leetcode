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
    int n = 0;
     ListNode *h = new ListNode();
    Solution(ListNode* head) {
        ListNode *curr = head;
        h = head;
        while (curr != NULL)
        {
            n++;
            curr = curr->next;
        }
    }
    
    int getRandom() {
        int ran = (rand()) % n; 
        ListNode *curr = h;
        while (ran--)
        {
            curr = curr->next;
        }
        return curr->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */