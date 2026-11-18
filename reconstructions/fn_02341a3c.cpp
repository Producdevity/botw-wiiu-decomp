#include "botw/teardown.h"

extern "C" void fn_02340abc(void* object, unsigned flags);

extern "C" void fn_02341a3c(void* object, unsigned flags) {
    teardown::destroy<fn_02340abc, 0, 0>(object, flags);
}
