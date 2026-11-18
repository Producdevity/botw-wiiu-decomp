#include "botw/teardown.h"

extern "C" void fn_0255a49c(void* object, unsigned flags);

extern "C" void fn_024cb074(void* object, unsigned flags) {
    teardown::destroy<fn_0255a49c, 0, 0>(object, flags);
}
