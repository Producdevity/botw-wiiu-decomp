#include "botw/teardown.h"

extern "C" void fn_028da320(void* object, unsigned flags);

extern "C" void fn_028e2a50(void* object, unsigned flags) {
    teardown::destroy<fn_028da320, 0, 0>(object, flags);
}
