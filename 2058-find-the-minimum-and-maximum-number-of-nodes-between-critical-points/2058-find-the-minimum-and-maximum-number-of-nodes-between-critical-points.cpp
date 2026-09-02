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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>res;
        if(head->next==NULL||head->next->next==NULL){
            return {-1,-1};
        }
        ListNode *pre=head;
        head=head->next;
        int indx=0;
        while(head->next!=NULL){
            indx++;
            if(head->val>pre->val&&head->next->val<head->val){
                res.push_back(indx);
            }
            if(head->val<pre->val&&head->next->val>head->val){
                res.push_back(indx);
            }
            pre=head;
            head=head->next;
        }
        if (res.size() < 2) {
            return {-1, -1};
        }
        int minima=INT_MAX;
        for(int i=1;i<res.size();i++){
            minima=min(minima,res[i]-res[i-1]);
        }
        int maxima=res.back()-res.front();
        return {minima,maxima};
    }
};