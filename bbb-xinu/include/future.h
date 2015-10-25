#include<xinu.h>
#ifndef _FUTURE_H_
#define _FUTURE_H_
 
/* define states */
#define FUTURE_EMPTY	  0
#define FUTURE_WAITING 	  1         
#define FUTURE_VALID 	  2         

/* modes of operation for future*/
#define FUTURE_EXCLUSIVE  3
#define FUTURE_SHARED 4
#define FUTURE_QUEUE 5

typedef struct queue
{
 int front;
 int rear;
 pid32 q[100];
}queue;	

typedef struct futent
{
   int *value;		
   int flag;		
   int state;         	
   pid32 tid;
   queue set_queue;
   queue get_queue;
}future;

/* Interface for system call */
future* future_alloc(int future_flags);
syscall future_free(future*);
syscall future_get(future*, int*);
syscall future_set(future*, int*);
int future_cons(future *fut);
int future_prod(future *fut);
#endif /* _FUTURE_H_ */
