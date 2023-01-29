/*
 * TIMER_prog.c
 *
 * Created: 06-Dec-22 10:39:19 PM
 *  Author: Qabbani
 */ 

#include "TIMER_register.h"
#include "TIMER_interface.h"
void TIMER_CTC_init_interrupt(void)
 {
	/* select CTC mode*/ 
	SET_BIT(TCCR0,WGM01);
	/* load a value in OCR0 */
	OCR0=79;
	/* select timer clock prescaller*/ //1024
	SET_BIT(TCCR0,CS00);
	SET_BIT(TCCR0,CS02);
	/* enable interrupt*/
	sei();
	SET_BIT(TIMSK,OCIE0);
	
} //keda el flag bi fire kol 10ms 