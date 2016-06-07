/*
题目描述

把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
 */

class Solution
{
public:
    int minNumberInRotateArray(vector<int> rotateArray)
    {
        if(rotateArray.size() == 0)         //容器为空时竟然要求返回0！
        {
            return 0;
        }
        for(int i = 0; i < rotateArray.size() - 1; i++)     //找到旋转分界点
        {
            if(rotateArray[i] > rotateArray[ i + 1])
            {
                return rotateArray[ i + 1 ];
            }
        }
        return rotateArray[ 0 ];    //特殊情况，容器已经有序，第一个数即为最小数
    }
};