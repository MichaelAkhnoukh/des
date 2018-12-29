#include <stdio.h>
#include <stdlib.h>
#include "des.h"


int main(){
    unsigned short direction;
    unsigned long long key = 0x0, plain = 0x0;
    unsigned long rounds = 0;

    scanf("%u",&direction);
    scanf("%16llX", &key);
    scanf("%16llX", &plain);
    scanf("%u", &rounds);

    unsigned long long output = des(key,plain,rounds,direction);

    printf("%016llX",output);
    return 0;
}
