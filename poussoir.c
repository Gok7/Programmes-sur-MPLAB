
#include <18F452.H>
#fuses XT,NOWDT,NOLVP
#use fast_io(B)
#use fast_io(D)
#use delay_us(200)


void main (void) {

int etat=0;
SET_TRIS_B(0xFF);
SET_TRIS_D(0x3F);
output_D  (0x40);

while(true) {

    if ((input_B)(&0x01)==0){
        if(etat==0){
        output_high(PIN_D7);
        output_low(PIN_D6); 
        etat=1;
        DELAY_MS(20);
    } 
else{
        output_high(PIN_D6);
        output_low(PIN_D7);
        etat=0;
        DELAY_MS(20);
    }

    }

while((input_b)(&0x01)==0){
}
       DELAY_MS(20);
              }

}