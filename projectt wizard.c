#include <18F452.h>
#fuses XT,NOWDT,NOLVP

void main ()
{
    unsigned char * PORTC;
    unsigned char * PORTD;
    unsigned char * TRISC;
    unsigned char * TRISD;

	PORTC = 0xF82;
	PORTD = 0xF83;
	TRISC = 0xF94;
	TRISD = 0xF95;

	*TRISC = 0xFF;	//FF pour port configuré en entrée
	*TRISD = 0x00;	//00 pour port configuré en sortie

	While(true){


	*PORTD = *PORTC;
}



}