/*
输入一个链表，从尾到头打印链表每个节点的值。
 */

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
            vector<int> val;
    while(head != NULL)
    {
        val.insert(val.begin(),head->val);
        head = head->next;
    }
    return val;
    }
};