#include<reg51.h>
sbit LED_pin = P2^0; //set the LED pin as P2.0
sbit LED_pin_1 = P2^2; //set the LED pin as P2.0
sbit BUTTON = P2^1;
void delay(int ms){
   unsigned int i, j;
   for(i = 0; i< ms; i++){
      // Outer for loop for given milliseconds value
      for(j = 0; j < 1275; j++){
         //execute in each milliseconds;
      }
   }
}
void main(){
	//LED_pin=0;
   while(1){
      //infinite loop for LED blinking
		 if(BUTTON==1){
     
      LED_pin = 1;
			LED_pin_1 = 0;
     
   }
		
	else{
		  LED_pin_1 = 1;
      LED_pin = 0;
		 
 }
}
	 }