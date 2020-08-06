#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty()) return ;
        k = k % nums.size();
        std::reverse(nums.begin(), nums.end());
        std::reverse(nums.begin(), nums.begin() + k);
        std::reverse(nums.begin() + k, nums.end());
    }
};

/*
template<class Iter>
void reverse(Iter first ,Iter last)
{
    while (first != last && first != --last) {
        std::swap(*first, *last);
        ++first;
    }
}
*/