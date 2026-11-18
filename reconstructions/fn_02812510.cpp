#include "botw/teardown.h"

extern "C" void fn_0280d134(void* object, unsigned flags);

extern "C" void fn_02812510(void* object, unsigned flags) {
    teardown::destroy<fn_0280d134, 0, 0>(object, flags);
}
