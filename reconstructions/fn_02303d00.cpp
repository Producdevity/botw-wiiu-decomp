#include "botw/teardown.h"

extern "C" void fn_02302330(void* object, unsigned flags);

extern "C" void fn_02303d00(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02302330, 0, 0>(object, release_flags);
}
