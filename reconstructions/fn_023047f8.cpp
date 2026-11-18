#include "botw/teardown.h"

extern "C" void fn_02303d00(void* object, unsigned flags);

extern "C" void fn_023047f8(void* object, unsigned flags) {
    teardown::destroy<fn_02303d00, 0, 0>(object, flags);
}
