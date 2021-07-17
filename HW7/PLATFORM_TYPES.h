/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 16/7/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(3) Lesson (1) , Assignment (1) */
/*****************************************************/

/* PLATFORM TYPES FOR STM10 ANSI C Types */

#ifndef PLATFORM_TYPES_STM10_H_
#define PLATFORM_TYPES_STM10_H_

/* Symbols */
#define CPU_TYPE 		CPU_TYPE_16
#define CPU_BIT_ORDER	LSB_FIRST
#define CPU_BYTE_ORDER	LOW_BYTE_FIRST

/* Types */
typedef unsigned short 	boolean;

typedef unsigned char 	uint8;
typedef signed char 	sint8;

typedef unsigned short 	uint16;
typedef signed short 	sint16;

typedef unsigned long 	uint32;
typedef signed long 	sint32;

typedef unsigned short 	uint8_least;
typedef unsigned short 	uint16_least;
typedef signed short 	sint8_least;
typedef signed short 	sint16_least;

typedef unsigned long 	uint32_least;
typedef signed long 	sint32_least;

typedef float			float32;
typedef double 			float64;

#endif /* PLATFORM_TYPES_STM10_H_ */