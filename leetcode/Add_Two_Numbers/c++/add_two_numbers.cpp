/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * FileName  : add_two_numbers.cpp
 * Author    : capten
 * Email     : 18803880712@126.com
 * Brief     : 两链表求和和C++版本
 * Time      : 2017-05-08 10:22:59
 * CopyRights: All rights reserved to XuChang Relay Research Institude Co.,Ltd
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */ 

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ret = new ListNode(0);
        ListNode *curr = ret;
        int count=0;

        while(true)
        {
            if(l1)
            {
                count += l1->val;
                l1 = l1->next;
                            
            }
            if(l2)
            {
                count += l2->val;
                l2=l2->next;
                            
            }

            curr->val  = count%10;
            count /= 10;

            if(l1!=NULL || l2!=NULL || count!=0)
            {
                curr = (curr->next = new ListNode(0));
                            
            }
            else
            {
                break;
            }
        }

        return ret;
    }
};
