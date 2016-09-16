#include <stdio.h>
#include <stdlib.h>
#include "stringutils.h"

int main(void){
  char **vector;
  char delimiter = ' ';

  char *test1 = "Hello my dog's name is Darwin.";
  puts(test1);
  vector = mytoc(test1, delimiter);
  printTokens(vector);
  free(vector);
  char *test2 = "   Hello    World!  ";
  puts(test2);
  vector = mytoc(test2, delimiter);
  printTokens(vector);
  free(vector);
  char *test3 = "";
  puts(test3);
  vector = mytoc(test3, delimiter);
  printTokens(vector);
  free(vector);
  char *test4 = "     ";
  puts(test4);
  vector = mytoc(test4, delimiter);
  printTokens(vector);
  free(vector);
  char *test5 = " HelloWorld";
  puts(test5);
  vector = mytoc(test5, delimiter);
  printTokens(vector);
  free(vector);
}
