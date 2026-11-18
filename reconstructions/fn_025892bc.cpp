#include "botw/teardown.h"

extern "C" void fn_02589ae8(void* object, unsigned flags);

extern "C" void fn_025892bc(void* object, unsigned flags) {
    teardown::destroy<fn_02589ae8, 0, 0>(object, flags);
}
