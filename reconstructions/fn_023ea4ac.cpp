#include "botw/teardown.h"

extern "C" void fn_023e9364(void* object, unsigned flags);

extern "C" void fn_023ea4ac(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023e9364, 0, 0>(object, release_flags);
}
