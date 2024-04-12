#include<vector>
class SolutionA{
public:
    int  hello = 1;
    /***
     * 给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
     * 请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
     * 注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，
     * 其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
     * 
    */
    void merge1(std::vector<int>& num1, int m, std::vector<int>& num2, int n);
    void merge2(std::vector<int>& num1, int m, std::vector<int>& num2, int n);
    /**
     * 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
     * 不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
     */
    int removeDup(std::vector<int>& nums);
    /**
     * 给你一个 非严格递增排列 的数组 nums ，请你原地删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。
     * 然后返回 nums 中唯一元素的个数。
     */
    int removeElement(std::vector<int>& nums, int m);
    /**
     * 给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使得出现次数超过两次的元素只出现两次 ，返回删除后数组的新长度。
     */
    int removeDuplicates(std::vector<int>& nums);
    /**
     * 给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
     * 你可以假设数组是非空的，并且给定的数组总是存在多数元素。
     */
    int majorityElement(std::vector<int>& nums);
    /**
     * 给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
     */
    void rotate(std::vector<int>& nums, int k);
    /**
     * 给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。
     * 你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。
     * 返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。
     */
    int maxProfit(std::vector<int>& prices);
    int maxProfitV1(std::vector<int>& prices);
    int maxProfitV2(std::vector<int>& prices);
    int maxProfitV3(std::vector<int>& prices);
    void sayHi();
};