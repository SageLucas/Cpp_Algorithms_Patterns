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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode(0); // starting point of the result linked list
        ListNode* curr = dummy;            // setting curr starting point of result list
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) // carry != 0 condition to account for the last sum > 10, or the input lists having only 1 element and the resulting sum > 10
        {
            // "condition ? A : B", if TRUE = A, else = B
            int v1 = (l1 != nullptr) ? l1->val : 0;
            int v2 = (l2 != nullptr) ? l2->val : 0;

            int sum = v1 + v2 + carry; // calculating sum of the first 2 digits
            carry = sum / 10; // if sum > 10, we "carry" the 1 that's leftover
            
            // saving the digit from the sum of the first 2 values into a new result list
            curr->next = new ListNode(sum % 10); // % 10 in case sum > 10
            curr = curr->next; // setting curr address to the address of the new ListNode created

            // moving the input pointers forward to the next nodes in the l1 and l2 lists
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        ListNode* result = dummy->next; // moving the first pointer of the result list forward from dummy
        delete dummy; // delete the starting node since we no longer need it, avoid memory leak
        return result;
    }
};
