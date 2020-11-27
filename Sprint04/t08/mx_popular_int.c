#include <stdio.h>
int mx_popular_int(const int *arr, int size) {
    int num[size];
    for (int i = 0; i < size; i++) {
        num[i] = 0;
        int temp = arr[i];
        for (int z = 0; z < size; z++) {
            if (temp == arr[z]) {
                num[i]++;
            }
        }
    }
    int max = num[0];
    int counter = 0;
    for (int i = 0; i < size; i++) {
        
        if(max < num[i]) {
            max = num[i];
            counter = i;
        }
    }
    return arr[counter];
}
