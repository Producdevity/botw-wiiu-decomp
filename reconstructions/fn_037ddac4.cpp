#include "botw/teardown.h"

extern "C" void fn_037e6024(void* object, unsigned flags);

extern "C" void fn_037ddac4(void* object, unsigned flags) {
    teardown::destroy<fn_037e6024, 0, 0>(object, flags);
}
