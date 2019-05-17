#include <18F452.h>
#fuses XT,NOWDT,NOLVP
#use fast_io(B)
#use fast_io(D
#use delay (clock=4000000)

void main ()
{	
int sortie_led=1;
int bouton=1;//bouton relaché
int fin=0;
int fin1=0;
SET_TRIS_D(0x00);
SET_TRIS_B(0xFF);
set_tris_c(0x00);
While(true){

bouton=input(PIN_B0);

if(bouton==0){
		    output_d(sortie_led);
			delay_ms( 500);
		while(fin1!=100){
		output_c (0x00);
		delay_us(500);
		output_c(0xff);
		delay_us(500);
		fin1++;
		}
	bouton=1;
	sortie_led=1;
	

	fin=0;
		
	while(fin!=7){
		while(fin1!=100){
		output_c (0x00);
		delay_us(500);
		output_c(0xff);
		delay_us(500);
		fin1++;
		}
        output_d(sortie_led);
		sortie_led=sortie_led<<1;
		output_d(sortie_led); 	
		delay_ms( 500);
		fin1=0;

		fin++;
		}
		}
	}
}