#include <18F452.H>
#fuses XT,NOWDT,NOLVP
#use fast_io(B)
#use fast_io(D)
#use delay (clock=4000000)

void main (void) {
int etat=1;
int bouton=1;
SET_TRIS_B(0xFF);
SET_TRIS_D(0x3F);
output_D  (0x40);

while(true) {
bouton=input(PIN_B0);

if(bouton==0){
	
	switch (etat){
		case 0 : etat=1;
				 output_D  (0x80);
				 
				 break;

		case 1 : etat=0;
				 output_D  (0x40);
				 
				 break;
	          };
			delay_ms(10);		
			}
	do{
	bouton=input(PIN_B0);
	}while(bouton==0);
	delay_ms(10);
	}
}