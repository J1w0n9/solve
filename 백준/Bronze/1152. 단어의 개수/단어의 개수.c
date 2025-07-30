#include <stdio.h>
#include <string.h>

int main(){
  char str[1000001];
  int word=0;
  scanf("%[^\n]",str);
  int len = strlen(str); 
  if(len == 1 && str[0]==' '){
    printf("%d",word);
    return 0;
  } 
  for(int i=1 ; i<len-1 ; i++){
    if(str[i]==' '){
        word++;
    }
  }
  printf("%d",word+1); 
  return 0;
}