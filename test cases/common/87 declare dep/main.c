#include<entity.h>
#include<stdio.h>

int main(int argc, char **argv) {
    if(entity_func1() != 5) {
        printf("Error in func1.\n");
        return 1;
    }
    if(entity_func2() != 9) {
        printf("Error in func2.\n");
        return 2;
    }
    return 0;
}