#include <stdio.h>
#include <strings.h>

void inverter_strings(char string[], int comp_string){  
  int indice_ultimo = comp_string - 1;
  
  for(int i = 0; i < comp_string/2; i++){
  string[i] += string[indice_ultimo - i];
    string[indice_ultimo - i] = string[i] -string[indice_ultimo - i];
    string[i] -= string[indice_ultimo - i];

  }
  
}


int main(void) {
  int n = 0, i, j, comp_msg;
  scanf("%d\n", &n);

  char msg[n][1000];

  for(i=0;i < n; i++){
    fgets(msg[i], 1000, stdin);
    
    comp_msg = strlen(msg[i]) - 1;

    //Primeira passada
    //Verificar cada caractere de msg[i]
    for(j = 0; j <comp_msg; j++){
      //Caso for letra
      if((msg[i][j] >= 'A' && msg[i][j] <= 'Z') || (msg[i][j] >= 'a' && msg[i][j] <= 'z') ){
        msg[i][j] += 3;
      }
    }

    //Segunda passada
    //Inverter a linha de msg[i]
   inverter_strings(msg[i], comp_msg);

    //Terceira passada
    //Deslocar 1 para esquerda dos caracteres a partir da metade truncada em diante
    for(int k = comp_msg/2; k < comp_msg; k++ ){
      msg[i][k] -= 1;
    }

  }
  
  for(i = 0; i < n; i++){
    printf("%s", msg[i]);
  }
  
  
return 0;
}