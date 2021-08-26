#include <stdio.h>

int main(void) {
  int i, n;
  int resultado = 1;

  printf("Informe um numero:\n");
  scanf("%d", &n);
  for(i = 2; i <n/2; i++){
    if(i%2==0){
      resultado++;
      break;
    }
  }
  if(resultado == 0){
    printf("eh primo");
}else{
    printf("%d nao eh primo", n);
}
}