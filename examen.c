#include <stdio.h>
#include <conio.h>

float valormes (float interes, float montoporaño){
    return (interes+montoporaño)/12;
}

int main (){
    float año, monto, interes, montoaño, interesaño, valormensual, totalintereses=0;
    printf("Ingrese anios a diferir\n");
    scanf("%f",&año);
    while (año<=0){
        printf("Ingrese una cantidad valida\n");
        scanf("%f",&año);    
    }

    printf("Ingrese el monto\n");
    scanf("%f",&monto);
    while (monto<=0){
        printf("Ingrese una cantidad valida\n");
        scanf("%f",&monto);    
    }

     printf("Ingrese el interes\n");
    scanf("%f",&interes);
    while (interes<=0){
        printf("Ingrese una cantidad valida\n");
        scanf("%f",&interes);    
    }

    montoaño=monto/año;
    printf("Anio     Interes    v. c/m*a\n");
    for (int i = 0; i < año; i++)
    {
       interesaño=((interes/100)*monto);
       valormensual=valormes(interesaño, montoaño);
       printf("%i       %.2f      %.2f\n", i+1, interesaño, valormensual);
       monto-=montoaño;
       totalintereses+=interesaño;
    }
    printf("El total de intereses es de %.2f", totalintereses);
    getch();
    return 0;
}