#include <18F452.h>
#fuses XT,NOWDT,NOLVP
#use fast_io(c)
#use fast_io(d)


void main ()
{
  
set_tris_c (0xFF); // entrée

set_tris_d (0x00); // sortie
 



	While(true){

		output_d (input_c());

    }

}