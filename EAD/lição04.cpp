/*As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e  contrataram um programador para desenvolver o programa que calcular� os reajustes. Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio,
baseado no sal�rio atual:
sal�rios at� R$ 280,00 (incluindo) : aumento de 20%
sal�rios entre R$ 280,00 e R$ 700,00 : aumento de 15%
sal�rios entre R$ 700,00 e R$ 1500,00 : aumento de 10%
sal�riosos de R$ 1500,00 em diante : aumento de 5% Ap�s o aumento ser realizado, informe na tela:
o sal�rio antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo sal�rio, ap�s o aumento.*/
#include <stdio.h>
#include <stdlib.h>
main() {
    float s,s1,s2,s3,s4,st1,st2,st3,st4;
    
    printf("Informe o seu sal�rio:");
    scanf("%f",&s);
    
    printf("\nSeu sal�rio antes do reajuste � de: %.2f",s);
    
     if(s<=280){
        printf("\nO percentual do seu aumento � de 20%");
    }else if(s<=700&&s>280){
        printf("\nO percentual do seu aumento � de 15%");
    }else if(s>700&&s<=1500){
        printf("\nO percentual do seu aumento � de 10%");
    }else if(s>1500){
        printf("\nO percentual do seu aumento � de 5%");
    }else{
        printf("\nSal�rio incorreto");
    }
    
    s1= s*0.20;
    s2= s*0.15;
    s3= s*0.10;
    s4= s*0.05;
    
    if(s<=280){
        printf("\nO aumento no seu sal�rio foi de: %.2f",s1);
    }else if(s<=700&&s>280){
        printf("\nO aumento no seu sal�rio foi de: %.2f",s2);
    }else if(s>700&&s<=1500){
        printf("\nO aumento no seu sal�rio foi de: %.2f",s3);
    }else if(s>1500){
        printf("\nO aumento no seu sal�rio foi de: %.2f",s4);
    }else{
        printf("\nSal�rio incorreto");
    }
    
    st1= s+s1;
    st2= s+s2;
    st3= s+s3;
    st4= s+s4;
    
    if(s<=280){
        printf("\nSeu al�rio final � de: %.2f",st1);
    }else if(s<=700&&s>280){    
        printf("\nSeu sal�rio final � de: %.2f",st2);
    }else if(s>700&&s<=1500){
        printf("\nSeu sal�rio final � de: %.2f",st3);
    }else if(s>1500){
        printf("\nSeu sal�rio final � de: %.2f",st4);
    }else{
        printf("\nSal�rio incorreto");
    }
}
