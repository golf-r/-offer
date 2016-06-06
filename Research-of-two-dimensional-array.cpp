class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
        int rows = array.size();
        if(rows == 0)
            return false;
        int columns = array[0].size();
        int i = columns - 1;
        int j = 0;
        bool res = false;
        while(j < rows && i >=0 && (j != rows - 1 || i != 0)){
            if(target > array[j][i])
                j++;
            else if(target < array[j][i])
                i--;
            else{
                res = true;
                break;
            }
                 
        }
         
        return res;
    }
};