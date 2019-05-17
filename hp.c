#include <18F452.h>
#fuses XT,NOWDT,NOLVP
#use delay (clock=4000000)

void main ()
{	
	set_tris_c(0x00);

While(true){
		output_c (0x00);
		delay_us( 500);
		output_c(0xff);
		delay_us(500);  	

	}
}