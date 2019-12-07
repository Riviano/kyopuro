#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    unsigned int i;
    unsigned int moto=-1;
    unsigned int seed = (unsigned int)time(NULL);
    for (i = 0;;i++) {
        moto = rand();
        printf("%d, \n", moto);
        if(moto==520932930){
          printf("yattaze%d\n",rand());
          break;
        }
    }
    putchar('\n');

    return 0;
}
