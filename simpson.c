#include <stdio.h>
#include <time.h>
//Trabalho realizado por Cauê Mendonça Magela do Ó / RGM:43558
int main() {
    int n;
    float a;
    float b;
    float h;
    float tempo;
    time_t t_ini,t_fim;

    t_ini=time(NULL);

    printf("Digite os intervalos [a,b]:\n");
    printf("a:\n");
    scanf("%f",&a);
    printf("b:\n");
    scanf("%f",&b);
    printf("Digite o numero de subintervalos\n:");
    scanf("%d",&n);

   printf("h = (a-b)/n = %f-%f / %d\n",b,a,n);
    h = (b-a)/n;
    printf("h = %.7f\n",h);

    float x0;
    int cont =0;
    x0=a;

    do {
        x0=x0+h;
        cont = cont+1;
    } while(x0<b);


    cont = cont +1; //CONT VALE 5


    int aux ;
    aux = cont;

    float x[aux];
    float y[aux];

    //LEITURA DAS IMAGENS (Y)
    int j =0;
    do {
        printf("Digite a im[%d]:",j);
        scanf("%f",&y[j]);
        j++;

    }while(j<cont);
    printf("\n CONTTTT AQUIIIIIIII 1  %d:",cont);

    //impressao dos subintervalos e imagens correspondentes
    x0= a;
    int i =0;
    do{
        printf("\nx[%d] = %.7f  <-> y[%d] = %.7f",i,x0,i,y[i]);
        x[i]=x0;
        x0 = x0+h;
        i++;
    }while(i<cont);

//CALCULO DE SOMATÓRIA DA INTEGRAL
    float soma = y[0];

    int k;

    //CONT VALE 5

    //CONT VALE 4

    for(k=1;k<cont;k++){

        if(k%2 ==1){ //se for par
            soma = soma + 4* y[k];
            printf("\n%fsoma atual:",soma);}

        else {
            if (k==cont-1){ //se for o ultimo termo
                soma = soma + y[k];
                printf("\n%fsoma atual:",soma);}

            else {
                soma = soma + 2 * y[k];
                printf("\n%fsoma atual:", soma);
            }}


    }

    printf("\nf(x) eh aproximadamente = %.7f",soma); //aproximadamente

    float integral = 0;
    integral = soma * h/3;
    printf("\nIntegral = h/3*(f(x))");
    printf("\nPortanto:\n Integral = %.7f/3 * (%.7f)",h,soma);
    printf("\nIntegral=%.7f",integral);
    t_fim = time(NULL);
    tempo= difftime(t_fim,t_ini);
    printf("\nTempo de execucao:%.1f Segundos",tempo);

    return 0;

}


