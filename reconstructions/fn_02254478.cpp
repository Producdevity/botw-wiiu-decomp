#include "botw/teardown.h"

extern "C" void fn_02254c50(void* object, unsigned flags);

extern "C" void fn_02254478(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02254c50, 0, 0>(object, release_flags);
}
