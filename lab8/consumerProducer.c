#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 10

typedef struct {
	
	DATA data;

	}item;

item buffer[BUFFER_SIZE];
int in = 0;
int out = 0;
int counter = 0;


/*
void *producer();
void *consumer();

sem_t empty, full;
int data;



int main()
{
	pthread_t producer_id, consumer_id;
	printf("\nMain Started\n");

}
*/
