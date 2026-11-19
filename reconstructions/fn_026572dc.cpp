#include "botw/teardown.h"

extern "C" void fn_028e7f84(void* object, unsigned flags);

extern "C" void fn_026572dc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_028e7f84, 0, 0>(object, release_flags);
}
