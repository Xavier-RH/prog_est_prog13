/* Autor: Xavier Romero Hernández, Realizado: 17/02/2022 
	Escribe un programa que calcule e imprima la factura de una compañia de telefonia celular
	*/

#include <stdio.h>

int main(){
	int cuenta, tipo, minutos, mdia, mnoche;
	float total;
	
	printf("Introduce tu numero de cuenta: ");
	scanf("%d",&cuenta);
	printf("Introduce el tipo de servicio (1.Regular), (2.Premium): ");
	scanf("%d",&tipo);
	
	switch(tipo){
		case 1:
			printf("Introduce los minutos utilizados: ");
			scanf("%d",&minutos);
			if(minutos<=50){
				total=10;
			}
			else{
				total=10+(minutos-50)*0.2;
			}
			printf("\nNo de cuenta\tTipo de servicio\tMinutos usados\tTotal a pagar\n");
			printf("%d\t\tRegular\t\t\t%d\t\t$%.2f",cuenta,minutos,total);
			break;
		case 2:
			printf("Introduce los minutos utilizados en el dia: ");
			scanf("%d",&mdia);
			printf("Introduce los minutos utilizados en la noche: ");
			scanf("%d",&mnoche);
			total=25;
			if(mdia>75){
				total=total+(mdia-75)*0.1;
			}
			if(mnoche>100){
				total=total+(mnoche-100)*0.05;
			}
			printf("\nNo de cuenta\tTipo de servicio\tMinutos usados en el dia\tMinutos usados en la noche\tTotal a pagar\n");
			printf("%d\t\tPremium\t\t\t%d\t\t\t\t%d\t\t\t\t$%.2f",cuenta,mdia,mnoche,total);
			break;
		default:
			printf("Opcion no valida");
			break;
	}
	return 0;
}
