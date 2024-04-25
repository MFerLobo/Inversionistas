#include<stdio.h>

int main(void)
{
    float inv1, inv2, inv3, total, por1, por2, por3;
    char nom1[30], nom2[30], nom3[30], porc;

    porc = 37;
    
    printf("Ingrese el nombre del primer inversionista: ");
    scanf("%s", nom1);
    printf("\nIngrese el dinero aportado por %s: $", nom1);
    scanf("%f", &inv1);
    printf("\nIngrese el nombre del segundo inversionista: ");
    scanf("%s", nom2);
    printf("\nIngrese el dinero aportado por %s: $", nom2);
    scanf("%f", &inv2);
    printf("\nIngrese el nombre del tercer inversionista: ");
    scanf("%s", nom3);
    printf("\nIngrese el dinero aportado por %s: $", nom3);
    scanf("%f", &inv3);

    total = inv1 + inv2 + inv3;

    por1 = inv1 * 100 / total;
    por2 = inv2 * 100 / total;
    por3 = inv3 * 100 / total;

    printf("\n\nEl total del dinero invertido es $%.2f\n\n", total);
    printf("La inversion de %s es de $%.2f lo que representa un %.2f%c del total\n\n", nom1, inv1, por1, porc);
    printf("La inversion de %s es de $%.2f lo que representa un %.2f%c del total\n\n", nom2, inv2, por2, porc); 
    printf("La inversion de %s es de $%.2f lo que representa un %.2f%c del total\n\n", nom3, inv3, por3, porc); 

    return 0;
}