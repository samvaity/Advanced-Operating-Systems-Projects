
#include <future.h> 

#include <stdio.h>  



   /*Global variable for producer consumer*/
 extern int n; /*this is just declaration*/
 
 extern sid32 consumed, produced; 

 extern future *f1, *f2, *f3;
 
  /*function Prototype*/
  	
 void consumer(int);
 void producer(int);


uint future_cons(future *fut);
uint future_prod(future *fut);


//network

uint net_consumer(future *fut);
uint net_producer(future *fut);
