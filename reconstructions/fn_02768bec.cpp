#include "botw/teardown.h"

extern "C" void fn_026625b8(void* object, unsigned flags);

extern "C" void fn_02768bec(void* object, unsigned flags) {
    teardown::destroy<fn_026625b8, 0, 0>(object, flags);
}
