#include "botw/teardown.h"

extern "C" void fn_02674a24(void* object, unsigned flags);

extern "C" void fn_026753d0(void* object, unsigned flags) {
    teardown::destroy<fn_02674a24, 0, 0>(object, flags);
}
