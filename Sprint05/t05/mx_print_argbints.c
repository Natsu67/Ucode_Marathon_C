#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

int main(int argc, char *argv[]) {
  int arr[32];
  if (argc == 1) {
    return 0;
  }
  for (int i = 1; i < argc; i++){
    for (int i = 0; i < 32; i++) arr[i] = 0;
    bool dig = 1;
      for (int j = 0; j < argv[i][j]; j++){
        if (argv[i][j] == '+' && argv[i][j+1] > 47 && argv[i][j+1] < 58){
          break;
        }
        else if (argv[i][j] == '-' && argv[i][j+1] > 47 && argv[i][j+1] < 58){
          break;
          }
        else {
          dig = 0;
          if (mx_isdigit(argv[i][j])) {
            dig = 1;
            continue;
          }
          break;
        }
      }
    if (dig == 1){
      int n = mx_atoi(argv[i]);
      int sign = 1;
      if (n < 0) {
        sign = -1;
        n*=sign;
        n--;
      }
      int iter = 0;
      while(n > 0) {
        arr[iter] = n % 2;
        n /= 2;
        iter++;
      }
      if (sign == -1)
        for (int j = 0; j < 32; j++){
          if (arr[j] == 0) arr[j] = 1;
          else arr[j] = 0;
        }
      for (int j = 31; j >= 0; j--) mx_printint(arr[j]);
      mx_printchar('\n');
    }           
  }  
}
