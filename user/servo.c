#include "user_config.h"
#include "servo.h"
#include "debug.h"

#include <osapi.h>
#include <c_types.h>
#include <pwm.h>


#define PWM_PERIOD  20000

#define MAXDUTY     (1000*PWM_PERIOD/45)


#define MIN_DUTY        8889
#define MAX_DUTY        53333
#define STEP            240.5
//52300 - 9000 = 43300


ICACHE_FLASH_ATTR
void servo_angle(uint8_t c, uint32_t v) {
    uint32_t vv;
    float f;
    f = v * 240.5 + MIN_DUTY;
    vv = (uint32_t)f;
    DEBUG("Duty: %d\n", vv);
    pwm_set_duty(vv , c);
    pwm_start();
}


ICACHE_FLASH_ATTR
void servo_init() {
   	uint32 pwmioinfo[][3] = {
        {SERVO1_MUX, SERVO1_FUNC, SERVO1_NUM},
        {SERVO2_MUX, SERVO2_FUNC, SERVO2_NUM},
        {SERVO3_MUX, SERVO3_FUNC, SERVO3_NUM},
    };
 
    uint32 pwmdutyinit[3] = {0};
    pwm_init(PWM_PERIOD, pwmdutyinit, 3, pwmioinfo);
    os_delay_us(1000);
    servo_angle(SERVO1, SERVO_INIT_ANGLE);
    servo_angle(SERVO2, SERVO_INIT_ANGLE);
    servo_angle(SERVO3, SERVO_INIT_ANGLE);
    pwm_start();
}
