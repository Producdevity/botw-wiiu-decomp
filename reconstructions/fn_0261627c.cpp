#include "botw/teardown.h"

extern "C" void fn_02619318(void* object, unsigned flags);

extern "C" void fn_0261627c(void* object, unsigned flags) {
    teardown::destroy<fn_02619318, 0, 0>(object, flags);
}
