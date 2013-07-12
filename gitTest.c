/*
 * =====================================================================================
 *
 *       Filename:  null_ptr.c
 *
 *    Description:  
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
int b = 30;
int c = 40;
 
int *return_ptr (int a) {
  if (a == 20)
    return &b;
  else if (a == 30)
    return &c;

}
int main() {
  int *ptr;
  int a = 540;
  ptr = return_ptr(a);
  if (ptr == NULL) {
    printf("Ptr is null I say");
  }
  else
    printf("ptr val is %d", *ptr);

}
