#include <pthread.h>
#include <stdio.h>

void *count(void *arg){
    char *name= arg;
    for(int i=0;i<=4;i++){
        printf("%s: %d\n", name, i);
    }
    return NULL;
}

int main(){
    pthread_t t1;
    pthread_t t2;

    puts("Launching threads");

    int chk1 = pthread_create(&t1, NULL, count, "thread 1");
    int chk2 = pthread_create(&t2, NULL, count, "thread 2");

    if(chk1!=0||chk2!=0){
        perror("pthread_create");
    }

    chk1=pthread_join(t1, NULL);
    chk2=pthread_join(t2, NULL);

    if(chk1!=0||chk2!=0){
        perror("pthread_join");
    }

    puts("Threads complete!");
}