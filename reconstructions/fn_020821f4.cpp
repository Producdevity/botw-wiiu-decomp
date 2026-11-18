#include "botw/teardown.h"

extern "C" void fn_022cc174(void* object, unsigned flags);

extern "C" void fn_020821f4(void* object, unsigned flags) {
    teardown::destroy<fn_022cc174, 0, 0>(object, flags);
}
