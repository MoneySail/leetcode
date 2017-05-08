
/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * FileName  : sum_2.c
 * Author    : capten
 * Email     : 18803880712@126.com
 * Brief     : 
              最笨的方法解题
 * CreateTime: 2017-04-27 22:32:02
 * CopyRights: All rights reserved to XuChang Relay Research Institute Co.,Ltd
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */

int* twoSum(int* nums, int numsSize, int target) {
    
    int v1,v2;
    int search_ok =0;
    
    for(int i = 0; i<= numsSize-1;i++)
    {
        for(int j=i+1;j<= numsSize-1;j++)
        {
            if(nums[i]+nums[j] == target)
            {
                v1 = i;
                v2 = j;
                search_ok =1;
                break;
            }
        }
            
        if(search_ok)
        {
            break;
        }

    }
    
    int *a = (int*)malloc(8);
    a[0] = v1;
    a[1] = v2;
    
    return a;
}
