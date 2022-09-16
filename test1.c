#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

typedef unsigned long long uint64;

void
* do_process(void *vargp)
{
    //pthread_mutex_lock(&lock);
    //int i = 0;

    //j++;
/*
    while(i < 5)
    {
        printf("%d", j);
        sleep(1);

        i++;
    }

    printf("...Done\n");
*/
long int y = 0;
for (long int i=1;i<=100000000;i++){
//int* ptr = (int*) malloc (5*sizeof(int));
y += i;
}
    //pthread_mutex_unlock(&lock);
}

int main() {
    uint64 val1, val2;
    long int y;
    //x = 3;
    unsigned int h, l;
    //__asm__ __volatile__("rdtsc" : "=a" (l), "=d" (h));
    //    val1 = ((uint64)l) | (((uint64)h) << 32);
    //    printf("%llu \n", val1);
    //for (int i=0; i<=100000; i++) {
        //__asm__ __volatile__("rdtsc" : "=a" (l), "=d" (h));
        //val = ((uint64)l) | (((uint64)h) << 32);
        //int* ptr = (int*) malloc (5*sizeof(int));
    //    y = i*3;

        //printf("%d \n", ptr);
    //}
    pthread_t t1;
    pthread_create(&t1, NULL, do_process, NULL);
    pthread_join(t1, NULL);
        //__asm__ __volatile__("rdtsc" : "=a" (l), "=d" (h));
        //val2 = ((uint64)l) | (((uint64)h) << 32);
        //printf("%llu \n", val2);
        //printf("%llu \n", val2-val1);
        
}
