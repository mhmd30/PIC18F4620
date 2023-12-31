/* 
 * File:   ecu_chr_lcd_custom_chr.h
 * Author: Mohammed_Elnefary
 *
 * Created on May 7, 2023, 6:33 PM
 */

#ifndef ECU_CHR_LCD_CUSTOM_CHR_H
#define	ECU_CHR_LCD_CUSTOM_CHR_H

/******************************************************************************/
/*                            Includes Section                                */
/******************************************************************************/


/******************************************************************************/
/*                       Macros Declaration Section                           */
/******************************************************************************/



/******************************************************************************/
/*                  Macro Functions Declaration Section                       */
/******************************************************************************/


/******************************************************************************/
/*                   Data_Types Declaration Section                           */
/******************************************************************************/

uint8 cross_bar1[] = {0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00};
uint8 cross_bar2[] = {0x1F,0x01,0x01,0x01,0x01,0x01,0x01,0x01};
uint8 cross_bar3[] = {0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x10};
uint8 cross_bar4[] = {0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10};


uint8 zizo[] = {0x0E,0x0A,0x0E,0x15,0x04,0x0A, 0x11, 0x00};
//uint8 gun[] = {0x00,0x10,0x1F,0x14,0x1C,0x10,0x10,0x00};
uint8 zizo_dead[] = {0x00,0x00,0x00,0x01,0x13,0x1F,0x00,0x00};
uint8 killer[]    = {0x07,0x05,0x02,0x0E,0x02,0x02,0x05,0x00};
uint8 messi[]     = {0x0E,0x0A,0x0E,0x15,0x04,0x0A, 0x11, 0x00};
uint8 goal[]      = {0x00,0x00,0x1F,0x11,0x11,0x11,0x00,0x00};
uint8 ball[]      ={0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x00}; 



/******************************************************************************/
/*                    functions declaration Section                           */
/******************************************************************************/


#endif	/* ECU_CHR_LCD_CUSTOM_CHR_H */

