/* 
 * File:   RealTimeClockDS1307.h
 * Author: Mohammed_Elnefary
 * Created on November 8, 2023, 7:01 AM
 */

#ifndef REALTIMECLOCKDS1307_H
#define	REALTIMECLOCKDS1307_H

#include "../../mcc_generated_files/mcc.h"
#include "../../mcc_generated_files/examples/i2c_master_example.h"
#include "../UART_LoggingDebugData/UART_LoggingDebugData.h"

typedef struct{
    uint8_t _Hours;
    uint8_t _Minutes;
    uint8_t _Seconds;
    uint8_t _Year;
    uint8_t _Month;
    uint8_t _Day;
}RealTimeClockDS1307_T;

RealTimeClockDS1307_T RealTimeClockDS1307_Get_Date_Time(void);
void Print_RealTimeClockDS1307(void);

#endif	/* REALTIMECLOCKDS1307_H */

