# include <stdio.h>
# include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");	
    float area, litros, latas, valor;
    //Entrada
    printf("Tamanho da �rea: ");
    scanf("%f", &area);
    //Processamento
    litros = area / 6;
    latas = litros - 18;
    valor = latas * 80;
    printf("Quantidades de latas: %.0f\n", latas);
    printf("Pre�o total R$:%.2f\n", valor);
    return 0;
}
