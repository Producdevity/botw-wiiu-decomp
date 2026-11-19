#include "botw/teardown.h"

extern "C" void fn_027b8364(void* object, unsigned flags);

extern "C" void fn_027a6010(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_027b8364, 0, 0>(object, release_flags);
}
