#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10], *b;
    b = (int*)malloc(10*sizeof(int));
    b[5] = 100;
    printf("%d\n", b[5]);
    printf("%d\n", a[5]);
    return 0;
}