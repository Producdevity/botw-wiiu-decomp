#include "botw/teardown.h"

extern "C" void fn_022a09bc(void* object, unsigned flags);

extern "C" void fn_02362410(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022a09bc, 0, 0>(object, release_flags);
}
