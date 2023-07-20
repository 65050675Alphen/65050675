// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a = 0;
    int b = 0;
    int c = 0;
    while(1){
        printf("enter a number: ");
        scanf("%d",&a);
        b += a;
        if(a < 1)
            break;
    c = c + 1;
    }
    //c = c-1;
    printf("V2 summation = %d\n",b);
    printf("V2 summation is  = %d\n",b / c);
    return 0;
}
