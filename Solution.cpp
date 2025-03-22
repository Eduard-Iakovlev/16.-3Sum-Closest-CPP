#include "Solution.h"
#include <algorithm>
#include <map>

int Solution::threeSumClosest(vector<int>& nums, int target){
    int tmp, j, k, dif, difmin = 2147483647;
    int size = nums.size();
    map<int, int> res;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < size; ++i) {
        j = i + 1;
        while (j < size - 1) {
            k = j + 1;
            while (k < size) {
                tmp = nums[i] + nums[j] + nums[k];
                dif = max(tmp, target) - min(tmp, target);
                if (dif < difmin) {
                    difmin = dif;
                    res.emplace(dif, tmp);
                }
                k++;
            }
            j++;
        }

    }
    return res[difmin];
}
