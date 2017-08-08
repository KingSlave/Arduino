#include <stdio.h>

static int suma = 0;
int sum (int num) {
    suma = suma + num;
return suma;
}

int main() {
    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));
    return 0;
}   
