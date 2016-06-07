/*题目描述
大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项。
*/
class Solution {       //使用动态规划法，用空间换取时间;前几次出错是因为下标控制问题，本题要求N可以为0
public:
    int Fibonacci(int n) {
    int *ans = NULL;
        ans = new int[n + 1];
        ans[0] = 0;
        ans[1] = 1;
        for(int i = 2; i < n + 1; i++)
        {
            ans[i] = ans[i - 1] + ans[i - 2];
        }

        if(n==0){
            return 0;
        }else if(n==1){
            return 1;
        }else {
            return ans[n];
    }
    }
};