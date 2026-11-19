#include "botw/teardown.h"

extern "C" void fn_0327a840(void* object, unsigned flags);

extern "C" void fn_02504170(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0327a840, 0, 0>(object, release_flags);
}
