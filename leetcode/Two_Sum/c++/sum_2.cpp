/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * FileName  : sum_2.cpp
 * Author    : capten
 * Email     : 18803880712@126.com
 * Brief     : 
               hash查表的方法
 * CopyRights: All rights reserved to XuChang Relay Research Institude Co.,Ltd
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */ 


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> store_map;
        vector<int> rets;
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(!store_map.count(nums[i]))
            {
                store_map.insert(pair<int,int>(nums[i],i));
            }
                                    
            if(store_map.count(target-nums[i]))
            {
                int first_position = store_map[target-nums[i]];
                
                /*----------匹配的应该在前面已经插入的值------*/
                if(first_position < i)
                {
                    rets.push_back(first_position);
                    rets.push_back(i);
                    return rets;
                }
            }
        }
        
        return rets;
        
    }
};
