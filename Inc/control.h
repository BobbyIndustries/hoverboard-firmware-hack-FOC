#pragma once
#include <stdint.h>
#include "config.h"

extern uint8_t nunchuk_data[6];
extern volatile uint32_t timeoutCntGen; // global counter for general timeout counter
extern volatile uint8_t  timeoutFlgGen; // global flag for general timeout counter

#if (defined(CONTROL_PPM_LEFT) && defined(DEBUG_SERIAL_USART3)) || (defined(CONTROL_PPM_RIGHT) && defined(DEBUG_SERIAL_USART2))
extern volatile uint16_t ppm_captured_value[PPM_NUM_CHANNELS+1];
#endif
#if (defined(CONTROL_PWM_LEFT) && defined(DEBUG_SERIAL_USART3)) || (defined(CONTROL_PWM_RIGHT) && defined(DEBUG_SERIAL_USART2))
extern volatile uint16_t pwm_captured_ch1_value;
extern volatile uint16_t pwm_captured_ch2_value;
#endif
