// brute force - 0(n2) me kr do , two loops ke dwara 

// or sorting se o(nlogn) se

// o(n) me 

// calculate number of 0 by c1++ calculate no. of 1 by c2++;
// now run a loop 0 to c1 put a[j]=0;
// now loop from c1 to c1+c2 a[j]=1
// now a[j]=2 loop of j from c1+c2 se <n 


// code

// public:
//     void sort012(int a[], int n)
//     {
//         int c1=0;
//         int c2=0;
        
//         for(int i=0;i<n;i++){
//             if(a[i]==0)
//             c1++;
//         }
//          for(int i=0;i<n;i++){
//             if(a[i]==1)
//             c2++;
//         }
//         for(int j=0;j<c1;j++){
//             a[j]=0;
//         }
        
//         int temp=c1+c2;
        
//         for(int j=c1;j<temp;j++){
//             a[j]=1;
//         }
        
//         for(int k=temp;k<n;k++){
//             a[k]=2;
//         }
//     }
