#include "botw/teardown.h"

extern "C" void fn_027808c0(void* object, unsigned flags);

extern "C" void fn_0277ff98(void* object, unsigned flags) {
    teardown::destroy<fn_027808c0, 0, 0>(object, flags);
}
