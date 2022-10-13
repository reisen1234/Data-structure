//int remove_duplicates(vector<int>& nums) {
//    int o = 0, u = nums.size(), i = 0, j = 0;
//    for (i = 0, j = 1; j < nums.size();)
//    {
//        if (o == 1)
//        {
//            if (nums[i] != nums[j])
//            {
//                nums[i + 1] = nums[j];
//                i++;
//                o = 0;
//                continue;
//            }
//            else
//            {
//                j++;
//            }
//        }
//        else
//        {
//            if (nums[i] == nums[j])
//            {
//                j++;
//                o = 1;
//            }
//            else if (o == 0)
//            {
//                i++;
//                j++;
//            }
//        }
//
//    }
//    for (int y = i; y < u - 1; y++)
//    {
//        nums.pop_back();
//    }
//    return nums.size();
//}