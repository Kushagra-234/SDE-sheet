// approach- isme ham precomputation krenge 
// pehle curmin=INT_MAX;
// curmax=0;

// ifa[i]<curmin
// curmin=a[i];

// curmax=max(curmax,prices[i]-curmin);

// tc-0(n2);
// sc-0(1);


// code
// public:
//     int maxProfit(vector<int>& prices) {

//         int curmin=INT_MAX;
//         int curmax=0;

//         for(int i=0;i<prices.size();i++){
//             if(prices[i]<curmin)
//             curmin=prices[i];

//             curmax=max(curmax,prices[i]-curmin);
//         }

//         return curmax;
        
//     }
// };