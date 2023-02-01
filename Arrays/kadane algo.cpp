// brute force 0(n2)

// ek cursum aur ek maxsum maxsum=max(cursum,maxsum) cursum +=a[i] if cursum<0 cursum=0;



// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxsum=INT_MIN;
//         int cursum=0;

//         for(int i=0;i<nums.size();i++){
//             cursum +=nums[i];

//           maxsum=max(maxsum,cursum);

//           if(cursum<0)
//           cursum=0;  
//         }

//         return maxsum;
        
//     }
// };