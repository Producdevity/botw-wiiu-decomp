#include "botw/teardown.h"

extern "C" void fn_027392e0(void* object, unsigned flags);

extern "C" void fn_0273968c(void* object, unsigned flags) {
    teardown::destroy<fn_027392e0, 0, 0>(object, flags);
}
