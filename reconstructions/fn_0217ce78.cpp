#include "botw/teardown.h"

extern "C" void fn_032c72e0(void* object, unsigned flags);

extern "C" void fn_0217ce78(void* object, unsigned flags) {
    teardown::destroy<fn_032c72e0, 0, 0>(object, flags);
}
