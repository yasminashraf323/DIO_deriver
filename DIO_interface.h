/**********************************************/
/*Auther  :YASMIN ASHRAF TOEMA                */
/*Version :V01                                */  
/*Date    :25/3/2020                          */
/*Descriotion : Function Interfacs            */ 
/**********************************************/

/***********************************************/
/* Guard of file will call one time in .c      */
/***********************************************/

#ifndef _DIO_INT_H_ 
#define _DIO_INT_H_

/******* PORTS ID ******/ 
#define DIO_U8_PORT_A 0
#define DIO_U8_PORT_B 1
#define DIO_U8_PORT_C 2
#define DIO_U8_PORT_D 3
/***********************/

/******* PIN ID ********/
#define DIO_U8_PIN0 0
#define DIO_U8_PIN1 1
#define DIO_U8_PIN2 2
#define DIO_U8_PIN3 3
#define DIO_U8_PIN4 4
#define DIO_U8_PIN5 5
#define DIO_U8_PIN6 6
/**********************/

/******* PORT DIRECTION  *******/
#define     DIO_U8_OUTPUT   1
#define     DIO_U8_INPUT    0
/*******************************/

/*********PORT VALUE  ********/
#define   DIO_U8_HIGH     1 
#define   DIO_U8_LOW      0
/*****************************/

/********** DIO_FUNCTIONS(PORT,PIN,OUTPUT) ************/
ErrorStatus  DIO_enumSetPortDirection( u8 DIO_u8PortID,u8 DIO_u8Direction);

ErrorStatus  DIO_enumSetPinDirection( u8 DIO_u8PortID,u8 DIO_u8PinID,u8 DIO_u8Direction);

ErrorStatus  DIO_enumSetPortValue( u8 DIO_u8PortID,u8 DIO_u8Value);

ErrorStatus  DIO_enumSetPinValue( u8 DIO_u8PortID,u8 DIO_u8PinID,u8 DIO_u8Value);

u8           DIO_enumGetPinValue( u8 DIO_u8PortID,u8 DIO_u8PinID);

#endif
