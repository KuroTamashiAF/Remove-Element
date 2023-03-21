#include <iostream>
#include <vector>
#include<iterator>
using namespace std;

class Solution {
public:
    static int removeElement(vector<int>& nums, int val) 
    {
        vector<int>::iterator it; 
        it = nums.begin();
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                nums.erase(it);
                it--;
                i--;
            }
            it++;
        }
     
        return nums.size();
    }
};


int main()
{
    vector<int> num = {2,2,3 };
    int value = 3;
    cout<<Solution::removeElement(num, value);

    return 0;
}