#include "SolutionA.h"
#include <algorithm>
#include <iostream>

void SolutionA::merge1(std::vector<int> &num1, int m, std::vector<int> &num2, int n)
{
    while (m > 0 && n > 0)
    {
        if (num1[m - 1] < num2[n - 1])
        {
            num1[m + n - 1] = num2[n - 1];
            --n;
        }
        else
        {
            num1[m + n - 1] = num1[m - 1];
            --m;
        }
    }
    if (m == 0 && n > 0)
    {
        for (int i = 0; i < n; ++i)
        {
            num1[i] = num2[i];
        }
    }
};

void SolutionA::merge2(std::vector<int> &num1, int m, std::vector<int> &num2, int n)
{
    int len = m + n - 1;
    --m, --n;
    while (m > -1 && n > -1)
    {
        num1[len--] = num1[m] > num2[n] ? num1[m--] : num2[n--];
    }
    while (n > -1)
    {
        num1[len--] = num2[n--];
    }
};

int SolutionA::removeDup(std::vector<int> &nums)
{

    std::sort(nums.begin(), nums.end());

    if (nums.size() < 2)
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

int SolutionA::removeElement(std::vector<int> &nums, int val)
{
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            // 1 3 9 3 7 20 16
            nums[k] = nums[i];
            ++k;
        }
    }
};
int SolutionA::removeDuplicates(std::vector<int> &nums)
{
    // 1,1,1,1,2,3,4,4,4,5,6,7
    int k = 0;
    int d = 0;
    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[k] != nums[i])
        {
            d = 0;
            ++k;
            nums[k] = nums[i];
        }
        else
        {
            ++d;
            if (d == 1)
            {
                k = k + 1;
                nums[k] = nums[i];
            }
        }
    }
    return ++k;
};

int SolutionA::majorityElement(std::vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int majorityEle = 0;
    int k = 0;
    int count = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[k] != nums[i])
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

void SolutionA::rotate(std::vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
};

int SolutionA::maxProfit(std::vector<int> &prices)
{
    int maxpro = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[i] < prices[j])
            {
                if (maxpro < prices[j] - prices[i])
                {
                    maxpro = prices[j] - prices[i];
                }
            }
        }
    }
    return maxpro;
};
 int SolutionA::maxProfitV1(std::vector<int>& prices)
 {
      int low = INT_MAX;
        int result = 0;
        for (int i = 0; i < prices.size(); i++) {
            low = std::min(low, prices[i]);  // 取最左最小价格
            result = std::max(result, prices[i] - low); // 直接取最大区间利润
        }
        return result;
 };

 int SolutionA::maxProfitV2(std::vector<int>& prices)
 {
    int len = prices.size();
        if (len == 0) return 0;
        std::vector<std::vector<int>> dp(len, std::vector<int>(2));
        dp[0][0] -= prices[0];
        dp[0][1] = 0;
        for (int i = 1; i < len; i++) {
            dp[i][0] = std::max(dp[i - 1][0], -prices[i]);
            dp[i][1] = std::max(dp[i - 1][1], prices[i] + dp[i - 1][0]);
        }
        return dp[len - 1][1];
 };

 int SolutionA::maxProfitV3(std::vector<int>& prices)
 {
 int len = prices.size();
        std::vector<std::vector<int>> dp(2, std::vector<int>(2)); // 注意这里只开辟了一个2 * 2大小的二维数组
        dp[0][0] -= prices[0];
        dp[0][1] = 0;
        for (int i = 1; i < len; i++) {
            dp[i % 2][0] = std::max(dp[(i - 1) % 2][0], -prices[i]);
            dp[i % 2][1] = std::max(dp[(i - 1) % 2][1], prices[i] + dp[(i - 1) % 2][0]);
        }
        return dp[(len - 1) % 2][1];
 };

void SolutionA::sayHi()
{
    std::cout << "hi" << std::endl;
};