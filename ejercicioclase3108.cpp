#include <iostream>
#include <stdio.h>
#include <stdint.h>
int Estado_Disparo_AD(int adc);
int main() {
	int adc = 0x0a000000;
	int resultado = 0;
	resultado = Estado_Disparo_AD(adc);
	printf("resultado: %d", resultado);
}
int Estado_Disparo_AD(int adc) {
	int salida = adc >> 24 ;
	salida = salida & (0x00000007);
	return salida;
}