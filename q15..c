#include<stdio.h>
#include<math.h>

int countPrime(int a, int b){
   static int  count = 0;
    if(a > b)
        return count;
   
    int flag = 1;
    for(int i = 2 ; i <= sqrt(a); ++i){
        if(a % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        count++;
    }
    

    countPrime(a+1,b);
}

int main(){
    printf("Enter the range to count the number of primes: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int count = countPrime(a, b);
    printf("%d" ,count);
    return 0;
}