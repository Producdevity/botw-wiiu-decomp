#include "botw/teardown.h"

extern "C" void fn_02505c64(void* object, unsigned flags);

extern "C" void fn_02506cb0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02505c64, 0, 0>(object, release_flags);
}
