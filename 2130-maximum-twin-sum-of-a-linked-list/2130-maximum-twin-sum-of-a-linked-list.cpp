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
    int count(ListNode* head){
       int r = 0;
       while(head){
          r++;
          head = head->next;
       }
    return r;
    }

    int pairSum(ListNode* head) {
        int c = count(head);

        if(c == 2){
            return head->val + head->next->val;
        }
        c = c/2;

        ListNode* mid = head;
        while(c--){
          mid = mid->next;
        }

        stack<int> st;
        while( mid){
           st.push( mid->val);
           mid = mid->next;
        }
        
        int maxi = INT_MIN;
        while(!st.empty()){
            int add = head->val + st.top();
            st.pop();
            head = head->next;
            maxi = max(add,maxi);
        }

        return maxi;
    }
};