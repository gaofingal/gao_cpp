#include"SolutionA.h"

void SolutionA::merge(std::vector<int>& num1, int m, std::vector<int>& num2, int n)
     {
     while(m > 0 && n > 0){
         if(num1[m - 1] < num2[n - 1]){
             num1[m + n - 1] = num2[n - 1];
             --n;
         }else{
             num1[m + n -1] = num1[m - 1];
             --m;
         }
        }
        if (m == 0 && n > 0){
         for (int i = 0; i < n; ++i){
             num1[i] = num2[i];
         }
        }
     }