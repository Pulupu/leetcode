import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/*
 * @lc app=leetcode id=39 lang=java
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        List<Integer> temp = new ArrayList<Integer>();
        Arrays.sort(candidates);
        backtrack(result, temp, candidates, target, 0, 0);
        return result;
    }

    public void backtrack(List<List<Integer>> result, List<Integer> temp, int[] candidates, int target, int sum, int start) {
        if (sum == target) {
            List<Integer> ans = new ArrayList<Integer>(temp);
            result.add(ans);
            return;
        } else if (sum > target) {
            return;
        }
        for (int i = start; i < candidates.length; i++) {
            temp.add(candidates[i]);
            backtrack(result, temp, candidates, target, sum + candidates[i], i);
            temp.remove(temp.size() - 1);
        }
    }
}
// @lc code=end
