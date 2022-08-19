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
    int i = 0;
    string s = "";
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL) return true;
        
        s+=to_string(head->val);
        
        if(!isPalindrome(head->next)) return false;

        if(s[i]-'0'!=head->val) return false;
        
        i++;
        
        return true;
        
    }
};