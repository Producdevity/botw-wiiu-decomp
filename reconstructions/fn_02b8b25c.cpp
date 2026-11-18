#include "botw/teardown.h"

extern "C" void fn_03180688(void* object, unsigned flags);

extern "C" void fn_02b8b25c(void* object, unsigned flags) {
    teardown::destroy<fn_03180688, 0, 0>(object, flags);
}
