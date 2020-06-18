#include"STD_types.h"
#include"BIT_MATH.h"
#include"ERROR_STATUS.h"
#include"DIO_interface.h"
#include <util/delay.h>
int main(void)
{
	DIO_enumSetPinDirection(DIO_U8_PORT_A,DIO_U8_PIN0,DIO_U8_OUTPUT);
	DIO_enumSetPinDirection(DIO_U8_PORT_A,DIO_U8_PIN1,DIO_U8_OUTPUT);
	DIO_enumSetPinDirection(DIO_U8_PORT_D,DIO_U8_PIN0,DIO_U8_OUTPUT);
	DIO_enumSetPinDirection(DIO_U8_PORT_C,DIO_U8_PIN0,DIO_U8_OUTPUT);
	DIO_enumSetPinDirection(DIO_U8_PORT_C,DIO_U8_PIN1,DIO_U8_OUTPUT);
while(1)
{/* CODE OF DC MOTOR*/
	/*DIO_enumSetPinValue(DIO_U8_PORT_A,DIO_U8_PIN0,DIO_U8_HIGH);
	_delay_ms(1000);
	DIO_enumSetPinValue(DIO_U8_PORT_A,DIO_U8_PIN1,DIO_U8_LOW);
	_delay_ms(1000);

	DIO_enumSetPinValue(DIO_U8_PORT_A,DIO_U8_PIN0,DIO_U8_LOW);
	_delay_ms(1000);
	DIO_enumSetPinValue(DIO_U8_PORT_A,DIO_U8_PIN1,DIO_U8_HIGH);
	_delay_ms(1000);*/
	DIO_enumSetPinValue(DIO_U8_PORT_C,DIO_U8_PIN0,DIO_U8_HIGH);
	_delay_ms(1000);
	DIO_enumSetPinValue(DIO_U8_PORT_C,DIO_U8_PIN1,DIO_U8_LOW);
		_delay_ms(1000);
		DIO_enumSetPinValue(DIO_U8_PORT_C,DIO_U8_PIN1,DIO_U8_HIGH);
		_delay_ms(1000);
		DIO_enumSetPinValue(DIO_U8_PORT_C,DIO_U8_PIN0,DIO_U8_LOW);
			_delay_ms(1000);
}
	return 0;
}
