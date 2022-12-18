#include <stdio.h> 
#include <string.h>

void FirstReverse(char * str) {
    scanf("%s", &str[20]);
    int leng = strlen(str);
    for(int i = leng - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
}

int main(void) { 
   
  FirstReverse(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
