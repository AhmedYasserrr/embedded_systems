#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(n, pos) (n |= (1UL<<pos))
#define TOGGLE(n, pos) (n ^= (1UL<<pos))
#define CLR_BIT(n,  pos) (n &= ~(1UL<<pos))
#define GET_BIT(n,  pos) (1U & (n>>pos))

#endif
