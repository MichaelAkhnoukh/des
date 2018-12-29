#ifndef DES_DES_H
#define DES_DES_H

#include <stdio.h>
#include <stdlib.h>

unsigned long long
des(unsigned long long key, unsigned long long plain, unsigned long rounds, unsigned short direction);

#endif //DES_DES_H
