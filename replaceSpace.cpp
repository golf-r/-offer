/*请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy
*/

class Solution {
public:
    void replaceSpace(char *str,int length) {
        for(int i = 0; i < length; i ++){
            if(*(str+i) == ' '){
                length += 2;
                int j = length -1;
                while(j-2 > i){
                    *(str+j) = *(str+j-2);
                    j--;
                }
                *(str+i) = '%';
                *(str+i+1) = '2';
                *(str+i+2) = '0';
            }
        }
    }
};