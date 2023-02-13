/*
 * traffic light.c
 *
 * Created: 04-Dec-22 7:52:26 PM
 *  Author: Qabbani
 */

 #include "../HAL/LED/LED_interface.h"
 #include "../HAL/LCD/LCD_interface.h"
 #include "../MCAL/TIMER/TIMER_interface.h"
 #define F_CPU 8000000UL
 #include <util/delay.h>
 
 volatile u8 counter1=0;
 
  u8 counter_green=10;
  u8 counter_yellow=5;
  u8 counter_red=7;
 int main(void)
 {
	 
	 LED_vInit(DIO_u8_PORTD,0);
	 LED_vInit(DIO_u8_PORTD,1);
	 LED_vInit(DIO_u8_PORTD,2);
	 
	 LCD_vInit();
	 TIMER_CTC_init_interrupt();
	 while(1)
	 {
		 counter_green=10;
		 counter_yellow=5;
		 counter_red=7;
		 
		 LCD_vClearScreen();
		 LCD_vSendString("remaining 10 sec");
		
		 LED_vOn(DIO_u8_PORTD,0);
		 
		
		 while(counter_green>0)
		 {
			 if(counter1>=100)
			 {
				 counter1=0;
				 counter_green--;
				 LCD_vMoveCursor(1,11);
				 LCD_vSendChar(' ');
				 LCD_vSendChar((counter_green%10)+48);
			 }
		 }
		 
		 _delay_ms(500);
		 LED_vOn(DIO_u8_PORTD,1);
		 LED_vOff(DIO_u8_PORTD,0);
		 LCD_vClearScreen();
		 LCD_vSendString("remaining  5 sec");
		 while(counter_yellow>0)
		 {
			 if(counter1>=100)
			 {
				 counter1=0;
				 counter_yellow--;
				 LCD_vMoveCursor(1,11);
				 LCD_vSendChar(' ');
				 LCD_vSendChar((counter_yellow%10)+48);
			 }
		 }
		 
		 _delay_ms(500);
		 LED_vOn(DIO_u8_PORTD,2);
		 LED_vOff(DIO_u8_PORTD,1);
		 LCD_vClearScreen();
		 LCD_vSendString("remaining 7 sec");
		 while(counter_red>0)
		 {
			 if(counter1>=100)
			 {
				 counter1=0;
				 counter_red--;
				 LCD_vMoveCursor(1,11);
				 LCD_vSendChar(' ');
				 LCD_vSendChar((counter_red%10)+ 48);
			 }
		 }
		 _delay_ms(500);
		 LED_vOff(DIO_u8_PORTD,2);
	 }
	 
 }


 ISR(TIMER0_COMP_vect)
 {
	 counter1++;
 }
