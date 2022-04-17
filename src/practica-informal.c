/*
 ============================================================================
 Name        : practica-informal.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int opcionIngresada;
	int precioAerolineas;
	int precioLatam;
	float kilometrosIngresados;
	float tarjetaDebito;
	float descuetoDebito;
	float aumentoCredito;
	float creditoAerolineas;
	const float bitcoin = 4610256;
	float precioBitcoin;
	float precioUnitarioPorKm;
	float diferenciaPrecios;
	const float cargaForzadaAerolineas=162965;
	const float cargaForzadaLatam=159339;
	float creditoLatam;
	float creditoForzado;
	do {
	printf("ingrese una opcion correcta\n 1)ingresar kilometros\n 2) ingrese precio de vuelos\n 3)calcular todos los costos\n 4)Informar Resultados\n 5)Carga forzada de datos\n 6)salir ");
	scanf("%d",&opcionIngresada);
	switch (opcionIngresada){
	case 1:
		printf("ingrese los kilometros");
		scanf("%f",&kilometrosIngresados);
		break;
	case 2:
		printf("ingrese precios de vuelos\n Aerolineas Argentinas ");
		scanf("%d",&precioAerolineas);
		printf("ingrese precios de vuelos Latam");
		scanf("%d",&precioLatam);
		break;
	case 3:
		 descuetoDebito = precioAerolineas*10/100;
		tarjetaDebito = precioAerolineas - descuetoDebito;
		aumentoCredito = precioAerolineas*25/100;
		creditoAerolineas = precioAerolineas + aumentoCredito;
		precioBitcoin = precioAerolineas / bitcoin;
		precioUnitarioPorKm = precioAerolineas / kilometrosIngresados;

		descuetoDebito = precioLatam*10/100;
		tarjetaDebito = precioLatam - descuetoDebito;
		aumentoCredito = precioLatam*25/100;
		creditoLatam = precioLatam + aumentoCredito;
	    precioBitcoin = precioLatam / bitcoin;
		precioUnitarioPorKm = precioLatam / kilometrosIngresados;

		diferenciaPrecios = precioAerolineas / precioLatam;

		descuetoDebito =cargaForzadaAerolineas*10/100;
		tarjetaDebito = cargaForzadaAerolineas - descuetoDebito;
		aumentoCredito =cargaForzadaAerolineas*25/100;
		creditoForzado = cargaForzadaAerolineas + aumentoCredito;
        precioBitcoin = cargaForzadaAerolineas / bitcoin;
		precioUnitarioPorKm = cargaForzadaAerolineas / kilometrosIngresados;

		descuetoDebito = cargaForzadaLatam*10/100;
		tarjetaDebito = cargaForzadaLatam - descuetoDebito;
		aumentoCredito = cargaForzadaLatam*25/100;
		creditoForzado = cargaForzadaLatam + aumentoCredito;
	    precioBitcoin =cargaForzadaLatam / bitcoin;
		precioUnitarioPorKm = cargaForzadaLatam/ kilometrosIngresados;
		diferenciaPrecios = cargaForzadaLatam / precioLatam;

		break;
	case 4:
		printf("%f", kilometrosIngresados);

		printf("Aerolineas");
		printf("el precio con tarjeta de debito es %f", tarjetaDebito);
		printf("el precio con tarjeta de credito es %f",creditoAerolineas);
		printf("el precio en bitcoin es %f",precioBitcoin);
		printf("el precio unitario por km es es %f",precioUnitarioPorKm);

		printf("Latam");
		printf ("el precio con tarjeta de debito es %f",tarjetaDebito);
		printf("el precio con tarjeta de credito es %f",creditoLatam);
		printf("el precio en bitcoin es %f",precioBitcoin);
		printf("el precio unitario por km es es %f",precioUnitarioPorKm);
		printf("la diferencia es de %f", diferenciaPrecios);


		break;
	case 5:descuetoDebito =cargaForzadaAerolineas*10/100;
				tarjetaDebito = cargaForzadaAerolineas - descuetoDebito;
				aumentoCredito =cargaForzadaAerolineas*25/100;
				creditoForzado = cargaForzadaAerolineas + aumentoCredito;
		        precioBitcoin = cargaForzadaAerolineas / bitcoin;
				precioUnitarioPorKm = cargaForzadaAerolineas / kilometrosIngresados;

				descuetoDebito = precioLatam*10/100;
				tarjetaDebito = precioLatam - descuetoDebito;
				aumentoCredito = precioLatam*25/100;
				creditoForzado = precioLatam + aumentoCredito;
			    precioBitcoin = precioLatam / bitcoin;
				precioUnitarioPorKm = precioLatam / kilometrosIngresados;
				diferenciaPrecios = precioAerolineas / precioLatam;
		printf("Aerolineas");
				printf("el precio con tarjeta de debito es %f", tarjetaDebito);
				printf("el precio con tarjeta de credito es %f",creditoAerolineas);
				printf("el precio en bitcoin es %f",precioBitcoin);
				printf("el precio unitario por km es es %f",precioUnitarioPorKm);

				printf("el precio con tarjeta de debito es %f",tarjetaDebito);
				printf("el precio con tarjeta de credito es %f",creditoForzado);
				printf("el precio en bitcoin es %f",precioBitcoin);
				printf("el precio unitario por km es es %f",precioUnitarioPorKm);
				printf("la diferencia es de %f", diferenciaPrecios);

			break;
	case 6:
			printf("chau");
			break;
	}
}while(opcionIngresada != 6);
	return EXIT_SUCCESS;
}














//menúuuuuuuuuuu
//	setbuf(stdout, NULL);
//	int opcionIngresada;
//	printf("ingrese una opcion correcta\n 1-dale boca\n 2- dale river");
//	scanf("%d",&opcionIngresada);
//	switch (opcionIngresada){
//	case 1:
//		printf("dale boquita");
//		break;
//	case 2:
//		printf("dale riber");
//		break;
//	}






