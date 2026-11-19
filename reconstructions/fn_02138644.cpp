#include "botw/teardown.h"

extern "C" void fn_02139970(void* object, unsigned flags);

extern "C" void fn_02138644(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02139970, 0, 0>(object, release_flags);
}
