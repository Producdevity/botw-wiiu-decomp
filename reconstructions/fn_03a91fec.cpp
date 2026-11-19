#include "botw/teardown.h"

extern "C" void fn_03acdd70(void* object, unsigned flags);

extern "C" void fn_03a91fec(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03acdd70, 0, 0>(object, release_flags);
}
