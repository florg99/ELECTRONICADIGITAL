
#include <iostream>
#include <stdio.h>
int ADCaConvertir(int adc, int bitentrada);
int Invertir(int adc, int bitentrada);
int BajoConsumo(int adc, int bitentrada); //preguntar
int LeerValor(int adc, int izq);
int main() {
	int ADC;
	ADC = 11;
	printf("%10 ADC \n");
	printf("%d\n", ADC);
	ADC = ADCaConvertir(ADC, 1);
	printf("%10 ADC CONVERTIDO \n");
	printf("%d\n", ADC);

	int FlancoInvertido = Invertir(ADC, 27);
	printf("%10 FLANCO INVERTIDO \n");
	printf("%d\n", FlancoInvertido);
	int Bajo = BajoConsumo(ADC, 21);
	printf("%10 Bajo Consumo \n");
	printf("%d\n", Bajo);
	int Clock = LeerValor(ADC, 8);
	printf("%10 Valor del clock \n");
	printf("%d\n", Clock);
}
int ADCaConvertir(int adc, int bitentrada) {
	int salida = adc | ((0x00000001) << bitentrada);
	return salida;
}
int Invertir(int adc, int bitentrada) {
	int salida = adc ^ (((0x00000001) << bitentrada)) ;
	return salida;
}
int BajoConsumo(int adc, int bitentrada) {
	int salida = adc & ~((0x00000001) << bitentrada); 
	return salida;
}
int LeerValor(int adc, int izq) {
	int salida = adc;
	salida = salida & (0x0000FF00);
	salida = salida >> izq;
	return salida;
}