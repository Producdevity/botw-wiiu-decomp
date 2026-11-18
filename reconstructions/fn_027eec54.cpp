#include "botw/teardown.h"

extern "C" void fn_027fb01c(void* object, unsigned flags);

extern "C" void fn_027eec54(void* object, unsigned flags) {
    teardown::destroy<fn_027fb01c, 0, 0>(object, flags);
}
