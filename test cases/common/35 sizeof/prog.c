#include"config.h"
#include<stdio.h>
#include<wchar.h>

int main(int argc, char **argv) {
    if(INTSIZE != sizeof(int)) {
        fprintf(stderr, "Mismatch: detected int size %d, actual size %d.\n", INTSIZE, (int)sizeof(int));
        return 1;
    }
    if(WCHARSIZE != sizeof(wchar_t)) {
        fprintf(stderr, "Mismatch: detected wchar size %d, actual size %d.\n", WCHARSIZE, (int)sizeof(wchar_t));
        return 1;
    }
    return 0;
}
