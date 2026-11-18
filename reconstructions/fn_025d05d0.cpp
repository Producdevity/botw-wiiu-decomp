#include "botw/teardown.h"

extern "C" void fn_025cffdc(void* object, unsigned flags);

extern "C" void fn_025d05d0(void* object, unsigned flags) {
    teardown::destroy<fn_025cffdc, 0, 0>(object, flags);
}
