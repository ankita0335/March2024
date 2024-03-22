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
    bool isPalindrome(ListNode* head) {
        vector<int>arr;
        while(head!=nullptr){
            arr.push_back(head->val);
            head=head->next;
        }
        vector<int>v;
        v=arr;
        reverse(v.begin(),v.end());
        return v==arr;
    }
};