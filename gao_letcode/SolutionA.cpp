#include"SolutionA.h"

void SolutionA::merge1(std::vector<int>& num1, int m, std::vector<int>& num2, int n)
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
     };

void SolutionA::merge2(std::vector<int>& num1, int m, std::vector<int>& num2, int n)
{
    int len = m + n -1;
    --m, --n;
    while (m>-1 && n>-1)
    {
        num1[len--] = num1[m] > num2[n] ? num1[m--] : num2[n--];
    }
    while (n > -1)
    {
        num1[len--]= num2[n--];
    }
    
    
    
    
};