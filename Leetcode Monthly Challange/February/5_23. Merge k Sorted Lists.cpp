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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*head=NULL;
        ListNode*copyh;
        
        priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> p;
        int n = lists.size();
        
        for(int i=0;i<n;i++){
            if(lists[i]!=NULL){
                p.push({lists[i]->val,lists[i]});
            }
        }
        
        // if (p.size()==0){
        //     return NULL;
        // }
        
        pair<int,ListNode*>temp;
        
        bool flag=true;
        while(!p.empty()){
            temp=p.top();
            p.pop();
            if(temp.second->next!=NULL){
                p.push({temp.second->next->val,temp.second->next});
            }
            
            if(flag){
                copyh=temp.second;
                head=copyh;
                flag=false;
            }else{
                copyh->next=temp.second;
                copyh=copyh->next;
            }
        }
        return head;
    }
};