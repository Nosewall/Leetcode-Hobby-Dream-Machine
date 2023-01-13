#include <semaphore.h>
#include <stdbool.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#define N 100

sem_t mutex;
typedef int semaphore;
sem_t empty;
sem_t full;
int buffer[N];
int i;
void * producer(void * a){
    int *p = (int *)a;
    int item;
    int value;
    while(true){
        sem_getvalue(&full, &value);
        sem_wait(&empty);
        buffer[i] = value;
        printf("Producer inserted item at buffer slot #%d \n", value);
        i += 1;
        sem_post(&full);
    }
}

void * consumer(void * a){
    int *p = (int *)a;
    int value;
    while(true){
        sem_wait(&full);
        value = buffer[i];
        printf("Consumer removed item at buffer slot #%d \n", value);
        buffer[i] = 0;
        i -= 1;
        sem_post(&empty);
    }
}

int main(int argc, char * argv[]){
    pthread_t tid1, tid2;
    int id1 = 1;
    int id2 = 2;
    sem_init(&empty, 0, N);
    sem_init(&full, 0, 0);

    pthread_create(&tid1, NULL, producer, &id1);
    pthread_create(&tid2, NULL, consumer, &id2);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    pthread_exit(NULL);
}