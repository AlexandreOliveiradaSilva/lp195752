#include <stdio.h>

int main(){
    int x, y, soma, maior, menor;
    
    soma=0;
    scanf("%d %d", &x, &y);
    
    if(x>y){
        maior=x;
        menor=y;
    } else{
        maior=y;
        menor=x;
        
    }
    
    for(int i=menor+1 ; i<maior ;i++){
        if(i % 2 !=0){
            soma += 1;
        }
    
    }
    
    printf("%d\n", soma);
    
    return 0;
}
