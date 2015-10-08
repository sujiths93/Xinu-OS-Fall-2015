#include <xinu.h>
#ifndef _FUTURE_H_
#define _FUTURE_H_
extern int n;
/*define states*/
#define FUTURE_EMPTY 0
#define FUTURE_WAITING 1
#define FUTURE_VALID 2


/*modes of operation*/
#define FUTURE_EXCLUSIVE 1

typedef struct futent
{
	int *value;
	int flag;
	int state;
	pid32 tid;
}future;

/*future* future_alloc(int future_flags);
syscall future_free(future*);
syscall future_get(future*,int*);
syscall future_set(future*,int*);*/
int future_prod(future *fut);
int future_cons(future *fut);

#endif