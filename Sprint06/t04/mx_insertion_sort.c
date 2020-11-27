int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int i, key, j, count = 0;  
    char *t;
    for (i = 1; i < size; i++) 
    {  
        
        key = mx_strlen(arr[i]);  
        t = arr[i];
        j = i - 1;  
        while (j >= 0 && mx_strlen(arr[j]) > key) 
        {  
            count ++;
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = t;  
    }  
    return count;
}
