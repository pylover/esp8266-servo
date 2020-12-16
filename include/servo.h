#ifndef _SERVO_H_
#define _SERVO_H_

#include <c_types.h>


#define SERVO_INIT_ANGLE    90


void servo_angle(uint8_t c, uint32_t v);
void servo_init();

#endif
