#include <xinu.h>

extern sid32 consumed,produced; 
extern int n;
extern int i;
void rec();
void rec1();
void consumer(int,sid32,sid32);
void producer(int,sid32,sid32);
