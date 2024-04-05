#include"SolutionA.h"
#include<algorithm>
#include<iostream>

void SolutionA::merge1(std::vector<int>& num1, int m, std::vector<int>& num2, int n)
     {
     while(m > 0 && n > 0){
         if(num1[m - 1] < num2[n - 1]){
             num1[m + n - 1] = num2[n - 1];
             --n;
         }else{
             num1[m + n -1] = num1[m - 1];
             --m;
         }
        }
        if (m == 0 && n > 0){
         for (int i = 0; i < n; ++i){
             num1[i] = num2[i];
         }
        }
     };

void SolutionA::merge2(std::vector<int>& num1, int m, std::vector<int>& num2, int n)
{
    int len = m + n -1;
    --m, --n;
    while (m>-1 && n>-1)
    {
        num1[len--] = num1[m] > num2[n] ? num1[m--] : num2[n--];
    }
    while (n > -1)
    {
        num1[len--]= num2[n--];
    }
    
};

int removeDup(std::vector<int>& nums){
    
    std::sort(nums.begin(), nums.end());

    if(nums.size() < 2)
    {
        return nums.size();
    }

    int k = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[k] != nums[i])
        {
            nums[++k] = nums[i];
        }
        
    }
    return ++k;
};
    int removeElement(std::vector<int>& nums, int val){
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                // 1 3 9 3 7 20 16
                nums[k] = nums[i];
                ++k;
            }
        }
        
    };
int removeDuplicates(std::vector<int>& nums){
        // 1,1,1,1,2,3,4,4,4,5,6,7
        int k = 0;
        int d = 0;
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[k] != nums[i])
            {
                d = 0;
                ++k;
                nums[k] = nums[i];
            }
            else
            {
                ++d;
                if(d == 1)
                {
                    k =k + 1;
                    nums[k] = nums[i];
                }
            }
        }
        return ++k;
    };
     int majorityElement(std::vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int majorityEle = 0;
        int k = 0;
        int count = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[k] != nums[i])
            {
                if ((i - k) > count)
                {
                    count = i - k;
                    majorityEle = nums[k];
                }
                k = i; 
            }
            if (nums.size() == i + 1)
            {
                if ((nums[i] == nums[k]) && ((i - k + 1) > count))
                {
                    majorityEle = nums[k];
                }  
            }
            
            
        }
        return majorityEle;   
    };

void rotate(std::vector<int>& nums, int k){
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin()+k, nums.end());
    };


void sayHi(){
    std::cout<<"hi"<<std::endl;
};