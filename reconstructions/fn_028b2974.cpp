#include "botw/teardown.h"

extern "C" void fn_0297c644(void* object, unsigned flags);

extern "C" void fn_028b2974(void* object, unsigned flags) {
    teardown::destroy<fn_0297c644, 0, 0>(object, flags);
}
