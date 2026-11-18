#include "botw/teardown.h"

extern "C" void fn_025d0b50(void* object, unsigned flags);

extern "C" void fn_025cffdc(void* object, unsigned flags) {
    teardown::destroy<fn_025d0b50, 0, 0>(object, flags);
}
