#include <stdio.h>
#include <stdlib.h>

int solve35(int n){
  int a = 0;
  while(n){
    if(n%3==0 || n% 5==0){
      a+=n;
    }
    n--;
  }
  return a;
}

int sum_prime(int num){
  int lp = -1;
  int total = 1;
  int c = 1;
  int ans = 0;
  for(; lp < num; c++){
    if(total % c != 0){
      lp = c;
      ans += lp;
    
    }
    total *= c;
  }
  return ans;
}

int sum_sqr_diff(int num){
  int c = 1;
  int s = 0;
  int total = 0;
  for(; c <= num; c++){
    total += c;
    s += c * c;
  }
  return total*total - s;
}


int main(){
  printf( "%d\n", solve35(1000));
  printf("%d\n", sum_prime(10));
  printf("%d\n", sum_sqr_diff(100));
}
