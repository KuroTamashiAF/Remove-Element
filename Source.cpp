#include <iostream>
#include <vector>
#include<iterator>
using namespace std;

//class Solution {
//public:
//    static int removeElement(vector<int>& nums, int val) 
//    {
//        vector<int>::iterator it; 
//        it = nums.begin();
//        
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] == val)
//            {
//                nums.erase(it);
//                it--;
//                i--;
//            }
//            it++;
//        }
//     
//        return nums.size();
//    }
//};


class Solution {
public:
    static int removeElement(vector<int>& nums, int val)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main()
{
    vector<int> num = {2,2,3 };
    int value = 3;
    cout<<Solution::removeElement(num, value);

    return 0;
}