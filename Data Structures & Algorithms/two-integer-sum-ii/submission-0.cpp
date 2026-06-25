class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int  i=0;
        int j=numbers.size()-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum >target){
                j--;
            }
            else if(sum<target){
                i++;
            }
            else{
                int index1=i+1;
                int index2=j+1;
                numbers.clear();
                numbers={index1,index2};
                return numbers;
            }
        }
    }
};
