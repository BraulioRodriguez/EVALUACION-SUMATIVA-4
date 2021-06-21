#include <stdio.h>

/* Elaborar una aplicación de línea de comandos en C 
que calcule el promedio de las ventas diarias (lunes a viernes) 
de los tres vendedores que tiene la empresa NASA (Nutrición Animal S.A.). */
 
int main() {
	int ventas[10][10];
	int i,j;
	float suma;
	float promedio;
	float promedio_final;
	
	int filas = 3;
    int columnas = 5;

	

	printf("Ingrese el valor de las ventas: \n");
	for(i = 0; i < filas; i++)
	{
		for(j = 0; j < columnas; j++)
		{
			printf("Vendedor %d | Dia %d: ",i+1,j+1);
			scanf("%d",&ventas[i][j]);
		}
	}
	printf("\n\n\n\n\n\n");
	printf("\t ***TABLA DE VENTAS DE LA EMPRESA NASA (Nutrición Animal S.A.)***\n");
	printf("\t       Lunes   Martes Miercoles Jueves Viernes\n");
	for(i = 0; i < filas; i++)
	{
		suma = 0;	
        printf("Vendedor %d:    ", i+1);	
		for(j = 0; j < columnas; j++)
		{
			printf(" $%d\t", ventas[i][j]);
			suma +=	ventas[i][j];
			promedio = suma / 5;
			
		}
		promedio_final += promedio/3;
		printf("Promedio de Ventas = $%.2f", promedio);
		printf("\n");		
		
	}
	printf("\n\t\t\t\t\t\t\tPROMEDIO FINAL = $%.2f\n\n\n\n", promedio_final);
	return 0;
}