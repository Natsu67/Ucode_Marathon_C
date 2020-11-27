int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) {
    int count = 0;
    int min_index;
    int i;
    int j;
    for (i = 0; i < size - 1; i++) {
        min_index = i;
        for (j = i + 1; j < size; j++) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[min_index])) {
                min_index = j;
            }
            else if (mx_strlen(arr[j]) == mx_strlen(arr[min_index])) {
                if (mx_strcmp(arr[j], arr[min_index]) < 0) {
                    min_index = j;
                }
            }
        }
        if (mx_strcmp(arr[min_index], arr[i]) != 0) {
            char *tmp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = tmp;
            count++;
        }
    }
    return count;
}  
