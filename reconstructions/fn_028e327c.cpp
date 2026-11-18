#include "botw/teardown.h"

extern "C" void fn_028c5388(void* object, unsigned flags);

extern "C" void fn_028e327c(void* object, unsigned flags) {
    teardown::destroy<fn_028c5388, 0, 0>(object, flags);
}
