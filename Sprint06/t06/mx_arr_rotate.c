void mx_arr_rotate(int *arr, int size, int shift) {
    if (shift > 0) {
        for(int j = 0; j < shift; j++) {    
            int x = arr[size-1];
            for (int i = size-1; i > 0; i--) {
                arr[i] = arr[i-1]; 
            }
            arr[0] = x;        
        }
    }
    else {
        shift = -shift;
        shift = size - shift;
        for(int j = 0; j < shift; j++) {    
            int x = arr[size-1], i; 
            for (i = size-1; i > 0; i--) {
                arr[i] = arr[i-1]; 
            }
            arr[0] = x;        
        }
    }
}
