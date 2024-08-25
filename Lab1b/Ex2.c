#include <stdio.h>

int main(){
    float n1,n2,n3,media,nota;
    printf("Insira a 1° nota: ");
    scanf("%f",&n1);
    printf("Insira a 2° nota: ");
    scanf("%f",&n2);
    printf("Insira a 3° nota: ");
    scanf("%f",&n3);
    printf("Insira a media: ");
    scanf("%f",&media);
    nota = (n1 + n2*2 + n3*3 + media)/7;
    if(nota>=9){
        printf("A");
    }else if(nota>=7.5){
        printf("B");
    }else if(nota>=6){
        printf("C");
    }else if(nota>=4){
        printf("D");
    }else if(nota<4){
        printf("E");
    }
}