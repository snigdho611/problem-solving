#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;

        for (const int num : nums){
            if (num != val){
                nums[i++] = num;
            }
        }

        return i;
    }
};

int main(){
    Solution s1 = Solution();
    vector <int> g1 = {0,1,2,2,3,0,4,2};
    int result = s1.removeElement(g1, 2);
    for(int i=0; i< g1.size(); i++){
        cout <<  g1[i] << endl;
    }

    cout<< result;
    
    return 0;
}