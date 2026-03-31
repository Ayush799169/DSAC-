/*#include<iostream>
#include<vector>
using namespace std;

        int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans=ans^nums[i];
        }
        return ans;
    }
int main(){
    vector<int> nums={4,1,2,1,2};
    cout<<"The single number is: "<<singleNumber(nums)<<endl;
}
#include<iostream>
#include<vector>
using namespace std;

        int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans=ans^nums[i];
        }
        return ans;
    }
int main(){
    vector<int> nums={7,3,2,3,2,4,4};
    cout<<"The single number is: "<<singleNumber(nums)<<endl;
}
    */

#include<iostream>
#include<vector>
using namespace std;

        int missingNo(vector<int>& nums) {
        int ans=nums.size();
        for(int i=0; i<nums.size(); i++){
            ans^=i;
            ans^=nums[i];
        }
        return ans;
    }
int main(){
    vector<int> nums={3,0,1,4,2,7,6,5,9,};
    cout<<"The missing number is: "<<missingNo(nums)<<endl;
}
