// clear understanding -> https://www.code-recipe.com/post/two-sum
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> map;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (map.find(complement) != map.end())
        {
            auto it = map.find(complement);
            result.push_back(it->second);
            result.push_back(i);
        }
        map.insert(make_pair(nums[i], i));
    }
    return result;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    vector<int> result = twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
