#include <stdio.h>
#include <stdint.h>
int main() {
  printf("hello world! \n");
  node n = { NULL, NULL, 0.0};
  return 0;
}

struct node{
  struct node *prev
  struct node *next
  double data
}

typedef union{
  intmax_t a;
  void*adr;
  long doublec;
} align_data;

void *ld_first(void *liste){
  void * first = liste;
  if (first == NULL) return NULL;
  liste = liste->next;
  return (first);
}

void *ld_last(void *liste){

  void *last = liste;
  if (last == NULL) //check si liste null
      return NULL;
  while (last->next != NULL) { // verifi si prochain element est null et passe last au next element
    last = last->next;
    return (last)
  }
}

void*ld_next(void*liste,void*current){
}
