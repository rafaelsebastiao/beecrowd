#include <stdio.h>

int calcMdc(int a, int b){
    int r = 0;
   
    r = a % b;
    
    if(r == 0){
        return b;
    }else{
        calcMdc(b, r);
    }
}



int main() {
    int n=0;
 
    scanf("%d", &n);
    
    int f1[n], f2[n], mdc[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &f1[i], &f2[i]);
        mdc[i] = calcMdc(f1[i], f2[i]);
        
    }
    
    for(int i = 0; i  < n; i++){
        printf("%d\n", mdc[i]);
    }
    
    return 0;
}