#ifndef MAIN_H_
#define MAIN_H_

#if STM32F == 2
#include "stm32f2xx.h"
#endif
#if STM32F == 4
#include "stm32f4xx.h"
#endif

void TimingDelay_Decrement(void);
void Delay(__IO uint32_t nTime);

uint32_t getSysTick(void);

typedef void (*init_fun)(void);
typedef void (*deinit_fun)(void);
typedef uint8_t (*tick_fun)(void);

void registerAnimation(init_fun init,tick_fun tick,deinit_fun deinit, uint16_t t, uint16_t duration, uint8_t idle);

void setLedX(uint16_t x, uint8_t r, uint8_t g, uint8_t b);
void fillRGB(uint8_t r, uint8_t g, uint8_t b);
#define FIRST_ON 22

#define KEY_A (1<<0)
#define KEY_B (1<<1)

//#define LED_WIDTH (150) // a roll of wide led spacing stripe
//#define LED_WIDTH (20) // a roll of wide led spacing stripe
//#define LED_WIDTH (60*8-6+150+150) // a roll of wide led spacing stripe
//#define LED_WIDTH (60*4-6) // a roll of wide led spacing stripe
//#define LED_WIDTH ((5*32)-10)
#define LED_WIDTH ((3*32))
#define WS2812B

#define CONSTRUCTOR_ATTRIBUTES	__attribute__((constructor));

#endif
