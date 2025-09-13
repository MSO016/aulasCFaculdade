#include <stdio.h>

int main() {
    int nums[5] = {2, 4, 6, 8, 10};

    int *p = nums;
    
    for (int i =0; i <5; i++){
    printf("VAlor de %d: %d \n", i, *(p + i));
}
    return 0;
}

