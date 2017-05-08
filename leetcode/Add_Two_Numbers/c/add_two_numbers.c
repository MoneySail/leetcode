
/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * FileName  : add_two_numbers.c
 * Author    : capten
 * Email     : 18803880712@126.com
 * Brief     : 两链表数相加得到新链表，c源文件
 * CreateTime: 2017-05-08 10:21:01
 * CopyRights: All rights reserved to XuChang Relay Research Institute Co.,Ltd
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */

typedef struct {
    int val;
    struct ListNode *next;
      
}ListNode;

typedef ListNode* NodePtrType;

struct ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    NodePtrType head = (NodePtrType)malloc(sizeof(ListNode));
    memset(head,0,sizeof(ListNode));
    NodePtrType curr = head;

    int count =0;

    while(1)
    {
        if(l1 !=NULL)
        {
            count += l1->val;
            l1=l1->next;
                    
        }
        if(l2 != NULL)
        {
            count += l2->val;
            l2 = l2->next;
                    
        }

        curr->val = count %10;
        count /= 10;

        if(l1!= NULL || l2!=NULL || count != 0)
        {
            curr->next=(NodePtrType)malloc(sizeof(ListNode));
            memset(curr->next,0,sizeof(ListNode));
            curr = curr->next;
                    
        }
        else
        {
            break;
                    
        }
    }

    return head;
}
