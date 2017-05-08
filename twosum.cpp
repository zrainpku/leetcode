#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
 public:
     vector<int> twoSum(vector<int> &numbers, int target) {
             int n = numbers.size();
             vector<int> result;
             map<int, int> index;
             for (int i = 0; i < n; i++) {
                 if (index.count(numbers[i]) != 0) {
                     // if exists
                     result.push_back(index[numbers[i]]);
                     result.push_back(i);
                     break;
                 } 
                 index[target - numbers[i]] = i; 
             }
             return result;
     }
 };


int main(){
    Solution solution;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target=26;
    vector<int> ans;
    ans=solution.twoSum(nums,target);
    printf("index1==%d----%d",ans[0],ans[1]);
    system("pause");
    return 0;
    }
