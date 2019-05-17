#include <18F452.h>
 #fuses XT,NOWDT,NOLVP
 #use delay (clock=4M)
 #use fast_io(c)
 #use fast_io(d)


void main (void) {

set_tris_c (0xFB);

while (true)

{

  output_c (0xFB);
  delay_us (1500);
  output_c (0xFF);
  delay_us (500);  


}
}
