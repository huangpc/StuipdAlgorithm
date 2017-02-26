/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 /**
 Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Subscribe to see which companies asked this question.
**/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) return l1;
        ListNode* result = new ListNode(-1);
        ListNode* pre = result;
        while(l1 || l2){
        	if(!l1){
        		result->next = l2;
        		break;
        	}else if(!l2){
        		result->next = l1;
        		break;
        	}else{
        		if(l1->val <= l2->val){
        			result->next = l1;
        			l1 = l1->next;
        		}else{
        			result->next = l2;
        			l2 = l2->next;
        		}
        		result = result->next;
        	}
        }
        result = pre->next;
        delete pre;
        return result;

    }
};