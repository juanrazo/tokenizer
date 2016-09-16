#include <stdlib.h>
#include <stdio.h>
#include "stringutils.h"

void get_lines();
int print_dollar();
void changeDelim(char newDlim);
void checkCommand(char **vec);

char **vector;
char delimiter = ' ';

int main(void){
  //Read in from the keyboard.
  get_lines();
  free(vector);
}

void get_lines(){
  int exit = 0;
  char buffer[4096];
  
  puts("Enter one line at time; Type exit  when done.");
  puts("To set a delimiter type SET and a single character");
  puts("Example: SET * ");
  //Print $ sign, get user input and check if the exit flag is on
  while(exit ==0 && print_dollar() && fgets(buffer, 4020, stdin) != NULL){
    
    vector = mytoc(buffer, delimiter);
    //Check for exit
    if(*vector != NULL)
      exit= isEqual(*vector, "exit");
    //Check if the user wants to set a delimiter
    checkCommand(vector);
    printTokens(vector); 
    
  }
}

//Helper methods 
int print_dollar(){
  printf("$ ");
  return 1;
}

void checkCommand(char **vec){
  char **pVec;
  pVec = vec;
  if(*pVec != NULL){
    if(isEqual(*pVec, "SET")){
      char del = *(pVec+1)[0];
      printf("%c\n", del);
      delimiter = del;
    }
  }
}