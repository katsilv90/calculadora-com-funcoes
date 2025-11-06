#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Soma(int a, int b){
    return a+b;
}

int Sub(int a, int b){
    return a-b;
}

int Multip(int a, int b){
    return a*b;
}

int Div(int a, int b){
    return a/b;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int escolha,num1,num2;

    printf("* Menu Calculadora *\n");

    do{
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("Escolha uma operação: ");
        scanf("%d", &escolha);
        if(escolha <1 || escolha>4){
            printf("\nPor favor insira um número válido!\n");
        }
    }while(escolha <1 || escolha>4);


    switch(escolha){
    case 1:
        printf("*Soma*\n");
        printf("Escolha o 1º número: ");
        scanf("%d", &num1);
        printf("Escolha o 2º número: ");
        scanf("%d", &num2);
        printf("%d + %d = %d\n",num1,num2,Soma(num1,num2));
        break;
    case 2:
        printf("*Subtração*\n");
        printf("Escolha o 1º número: ");
        scanf("%d", &num1);
        printf("Escolha o 2º número: ");
        scanf("%d", &num2);
        printf("%d - %d = %d\n",num1,num2,Sub(num1,num2));
        break;
    case 3:
        printf("*Multiplicação*\n");
        printf("Escolha o 1º número: ");
        scanf("%d", &num1);
        printf("Escolha o 2º número: ");
        scanf("%d", &num2);
        printf("%d * %d = %d\n",num1,num2,Multip(num1,num2));
        break;
    case 4:
        printf("*Divisão*\n");
        printf("Escolha o 1º número: ");
        scanf("%d", &num1);
        printf("Escolha o 2º número: ");
        scanf("%d", &num2);
        printf("%d / %d = %d\n",num1,num2,Div(num1,num2));
        break;
    }

    system("pause");
    return 0;
}
