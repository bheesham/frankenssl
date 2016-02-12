#pragma once

#ifdef __HST
#define _HSTN() printf("HST: not impl: %s\n", __FUNCTION__)
#define _HSTU(IM) printf("HST: using %s's impl of: %s\n", IM, __FUNCTION__)
#else
#define _HSTN() ((void) 0)
#define _HSTU(IM)((void) 0)
#endif
