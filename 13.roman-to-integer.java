/*
 * @lc app=leetcode id=13 lang=java
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
    public int romanToInt(String s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i == s.length() - 1) {
                switch (s.charAt(i)) {
                    case 'I':
                        result += 1;
                        break;
                    case 'V':
                        result += 5;
                        break;
                    case 'X':
                        result += 10;
                        break;
                    case 'L':
                        result += 50;
                        break;
                    case 'C':
                        result += 100;
                        break;
                    case 'D':
                        result += 500;
                        break;
                    case 'M':
                        result += 1000;
                        break;
                }
                break;
            }
            switch (s.charAt(i)) {
                case 'C':
                    if (s.charAt(i + 1) == 'M') {
                        result += 900;
                        i++;
                    } else if (s.charAt(i + 1) == 'D') {
                        result += 400;
                        i++;
                    } else {
                        result += 100;
                    }
                    break;
                case 'X':
                    if (s.charAt(i + 1) == 'C') {
                        result += 90;
                        i++;
                    } else if (s.charAt(i + 1) == 'L') {
                        result += 40;
                        i++;
                    } else {
                        result += 10;
                    }
                    break;
                case 'I':
                    if (s.charAt(i + 1) == 'X') {
                        result += 9;
                        i++;
                    } else if (s.charAt(i + 1) == 'V') {
                        result += 4;
                        i++;
                    } else {
                        result += 1;
                    }
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'M':
                    result += 1000;
                    break;
                default:
                    break;
            }
        }
        return result;
    }
}
// @lc code=end
