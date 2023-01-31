// pascal triangle me ek aisa triangle bnate hai jisme current wala node sum hota hai j-1 aur j wale ka
// coloumn me 
// tc- o(n)
// sc-0(1)





// code 

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {

//         vector<vector<int>>ans;

//         for(int i=0;i<numRows;i++){
//             vector<int>v(i+1,1);

//             for(int j=1;j<i;j++){
//                 v[j]=ans[i-1][j] + ans[i-1][j-1];
//             }

//             ans.push_back(v);
//         }


//         return ans;
        
        
//     }
// };