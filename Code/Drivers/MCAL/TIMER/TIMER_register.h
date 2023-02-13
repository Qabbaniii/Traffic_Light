/*
 * TIMER_register.h
 *
 * Created: 07-Dec-22 1:41:56 AM
 *  Author: Qabbani
 */ 


#ifndef TIMER_REGISTER_H_
#define TIMER_REGISTER_H_


/* Timer 0 */

#define TCNT0   *((volatile u8 *) 0x52)
#define TCCR0   *((volatile u8 *) 0x53)

#define MCUSR   _SFR_IO8(0x34)
#define MCUCSR  MCUSR
#define MCUCR   _SFR_IO8(0x35)

#define TWCR    _SFR_IO8(0x36)

#define SPMCR   _SFR_IO8(0x37)

#define TIFR    *((volatile u8 *) 0x58)
#define TIMSK   *((volatile u8 *) 0x59)

#define GIFR    _SFR_IO8(0x3A)
#define GIMSK   _SFR_IO8(0x3B)
#define GICR    GIMSK

#define OCR0    *((volatile u8 *) 0x5C)

/* Timer 1 */
#define ICR1    _SFR_IO16(0x26)
#define ICR1L   _SFR_IO8(0x26)
#define ICR1H   _SFR_IO8(0x27)
#define OCR1B   _SFR_IO16(0x28)
#define OCR1BL  _SFR_IO8(0x28)
#define OCR1BH  _SFR_IO8(0x29)
#define OCR1A   _SFR_IO16(0x2A)
#define OCR1AL  _SFR_IO8(0x2A)
#define OCR1AH  _SFR_IO8(0x2B)
#define TCNT1   _SFR_IO16(0x2C)
#define TCNT1L  _SFR_IO8(0x2C)
#define TCNT1H  _SFR_IO8(0x2D)
#define TCCR1B  _SFR_IO8(0x2E)
#define TCCR1A  _SFR_IO8(0x2F)

#define SFIOR   _SFR_IO8(0x30)

#define OSCCAL  _SFR_IO8(0x31)
#define OCDR    OSCCAL

/* Timer 2 */
#define OCR2    _SFR_IO8(0x23)
#define TCNT2   _SFR_IO8(0x24)
#define TCCR2   _SFR_IO8(0x25)

#endif /* TIMER_REGISTER_H_ */