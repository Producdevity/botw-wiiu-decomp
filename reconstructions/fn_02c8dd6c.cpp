#include "botw/teardown.h"

extern "C" void fn_021fcdc4(void* object, unsigned flags);

extern "C" void fn_02c8dd6c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_021fcdc4, 0, 0>(object, release_flags);
}
