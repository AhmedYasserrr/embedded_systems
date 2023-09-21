
#define set(n, pos) (n | (1UL<<pos))
#define toggle(n, pos) (n ^ (1UL<<pos))
#define clear(n,  pos) (n & ~(1UL<<pos))
#define read(n,  pos) (1U & (n>>pos))
