/*============================================================================*/


/* ===========================================================================
 * Define to prevent recursive inclusion
 * ===========================================================================*/
#ifndef PWM_H_
#define PWM_H_

/* ===========================================================================
 * Includes
 * ===========================================================================*/
#include "stm32f4xx.h"

/* ===========================================================================
 * Public Defines
 * ===========================================================================*/

/* ===========================================================================
 * Public Macros
 * ===========================================================================*/

/* ===========================================================================
 * Public Type-Definitions
 * ===========================================================================*/

/* ===========================================================================
 * Public Constants
 * ===========================================================================*/

/* ===========================================================================
 * Public Variables
 * ===========================================================================*/

/* ===========================================================================
 * Declaration of Public Functions
 * ===========================================================================*/
	void Set_Duty_Cycle(int channel);
	void Init_PWM_Operation_Mode(int i_id);
	void PWM_init(void);
	void Set_PWM_Break_Event(void);
	void Reset_PWM_Break_Event(void);
	void Set_PWM_Mode(void);
	void Init_PWM_Operation_Halb_Bridig(int i_id,int Frequnzy,int DutyCycle);
	void Sprungsignal(int i_id,int DutyCycle,int NumberaofPulses);
	void PWM_init_halb_Bridig(void);
	void Init_PWM_Operation_Full_Bridig(int i_id,int Frequnzy,int DutyCycle);

#endif /* PWM_H_ */

/* ===========================================================================
 * Log (Place comments about changes of the file below)
 * ===========================================================================*/

/**
 * @}
 */

