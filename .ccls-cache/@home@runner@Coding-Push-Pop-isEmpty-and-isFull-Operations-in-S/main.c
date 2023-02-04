#include <stdio.h>
#include <stdlib.h>

struct stack {
  int top;
int size;
int * arr;
};

int isfull(struct stack* ptr){
  if(ptr->top == ptr->size -1){
    printf("stack isful \n");
    return 1;
  }else{
     printf("stack is not- full \n");
    return 0;
  }
};

int isempty(struct stack* ptr){
   if(ptr->top == -1){
    printf("stack is empty \n");
    return 1;
  }else{
     printf("stack is not- empty \n");
    return 0;
  }
};

void push(struct stack* ptr, int val){
  if(!isfull(ptr)){
    ptr->top ++;
    ptr->arr[ptr->top]= val;
   printf("update value is %d\n",val);
    }else{
    printf("not update value\n");
  }
};

void pop(struct stack* ptr){
  if(!isempty(ptr)){
   int val = ptr->arr[ptr->top];
    ptr*top --
    
   printf("pop  value is \n");
    }else{
    printf("pop not update value\n");
  }
};

int main(void) {
  
 struct stack *sp =(struct stack*) malloc(sizeof(struct stack));
  sp->size = 2;
  sp->top = -1;
 sp->arr= (int *) malloc(sizeof(int));
  
  printf("stack has been created\n");
  printf("%d \n",isfull(sp));
  printf("%d \n",isempty(sp));
  push(sp ,34);
  push(sp ,34);
  push(sp ,34);
  printf("%d \n",isfull(sp));
  printf("%d \n",isempty(sp));
  return 0;
}