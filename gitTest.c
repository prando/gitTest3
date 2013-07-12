/*
 * =====================================================================================
 *
 *       Filename:  null_ptr.c
 *
 *    Description:  This is my first commit in GIT, so nothing worthwhile.
 *
 *        Version:  1.0
 *        Created:  01/21/13 11:55:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */ 
#include <stdio.h>
#include <string.h>
#define ACTUALLIMIT 1000000000
#define MAXLIMIT 31623

void sieve(char *);
void printSieve(char *, int, int);
void initialize(char *);

int main(){

  char isPrime[MAXLIMIT]; 
  
  int l[10], r[10];
  int t, i = 0;
  scanf("%d", &t);
  sieve(isPrime);
  while(i < t) {
    scanf("%d %d", &l[i], &r[i]);
    i++;
  }
  i = 0;
  while(i < t){
    printSieve(isPrime, l[i], r[i]);
    printf("\n");
    i++;
  }
return 0;

}

void initialize(char *isPrime){
  int i;
  for (i = 0; i < MAXLIMIT; i++)
    isPrime[i] = '0';
}

void sieve(char *isPrime){

  int i, j;
  initialize(isPrime);
  isPrime[0] = '1';
  isPrime[1] = '0';
  isPrime[2] = '0';
  for (i = 2; i < MAXLIMIT; i+=1){
    isPrime[i] = '0';
    for (j = i*i; j < MAXLIMIT; j+=i) {
      if (isPrime[j-1] == '0')
        isPrime[j-1] = '1';
    }
  }
}

void printSieve(char *isPrime, int l, int r){
  int i, j, pass;

  for(i = l;i < r; i++){
    pass = (i!=1);
    for (j = 2; j*j <= i; j++) {
      if (isPrime[i-1] == '1') {
        if (i % j == 0) {
          pass = 0;
          break;    
        }
      }
    }
      if (pass == 1)
        printf("%d\n", i);
  }
}
