#include "botw/teardown.h"

extern "C" void fn_035486b0(void* object, unsigned flags);

extern "C" void fn_03557d28(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_035486b0, 0, 0>(object, release_flags);
}
