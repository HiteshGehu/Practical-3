 set<vector<int>> s;
        int i,j,k,l;
        for(i = 0;i<nums.size() - 3;i++){
           for(j = i;j<nums.size() - 2;j++){
               k = j + 1;l = nums.size() - 1;
               while(k<l){
                   sum = nums[i] + nums[j] + nums[k] + nums[l];
                   if(sum == target){
                       vector<int> a;
                       a.push_back(nums[i]);
                        a.push_back(nums[j]);
                        a.push_back(nums[k]);
                        a.push_back(nums[l]);
                       s.insert(a);
                   }
                   else if(sum<target){
                       k++;
                   }
                   else{
                       l--;
                   }
               }
           }
        }
        for(auto it:s){
            z.push_back(it);
        }
        return z;
    }
