// approach - isme ham peak and valley concept folow krte hai simple
// if prices[i]>prices[i-1] direct agar pichle din se jyada hai price to fir 

// prift+=prices[i]-prices[i-1]


// code 
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int profit=0;

//         for(int i=1;i<prices.size();i++){
//             if(prices[i]>prices[i-1])
//             profit += prices[i]-prices[i-1];
//         }
        
//         return profit;
//     }
// };