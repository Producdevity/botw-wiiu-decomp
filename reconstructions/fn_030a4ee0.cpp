#include "botw/teardown.h"

extern "C" void fn_030c07fc(void* object, unsigned flags);

extern "C" void fn_030a4ee0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_030c07fc, 0, 0>(object, release_flags);
}
