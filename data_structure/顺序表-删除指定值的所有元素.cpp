//É¾³ý£¨1£©
//int remove_elements(vector<int>& nums, int val) {
//    for (auto iter = nums.begin(); iter != nums.end(); iter++)
//    {
//        if (*iter == val)
//        {
//            iter = nums.erase(iter);
//            iter--;
//        }
//    }
//    return nums.size();
//}
//É¾³ý£¨2£©
//int remove_elements(vector<int>& nums, int val) {
//    int i, j, s = nums.size();
//    for (i = j = 0; i < nums.size(); i++)
//    {
//        if (nums[i] != val)
//        {
//            int temp = 0;
//            temp = nums[i];
//            nums[i] = nums[j];
//            nums[j] = temp;
//            j++;
//        }
//    }
//    for (int k = s - 1; k >= j; k--)
//    {
//        nums.pop_back();
//    }
//    return nums.size();
//}