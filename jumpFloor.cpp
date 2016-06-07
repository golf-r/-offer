/*题目描述

一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
*/

class Solution {        //将问题转化为使用动态规划解斐波那契数列
public:
    int jumpFloor(int number) {
        int *ans = NULL;
        ans = new int[number + 1];
        ans[0] = 0;
        ans[1] = 1;
        ans[2] = 2;
        for (int i = 3; i < number + 1; i++)
        {
            ans[i] = ans[i-1] + ans[i-2];
        }
        if(number<=0){
            return -1;
        }else if(number==1){
            return 1;
        }else if (number==2)
        {
            return 2;
        }else {
            return ans[number];
        }
     }
};