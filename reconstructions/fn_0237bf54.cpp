#include "botw/teardown.h"

extern "C" void fn_0237ddd8(void* object, unsigned flags);

extern "C" void fn_0237bf54(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0237ddd8, 0, 0>(object, release_flags);
}
