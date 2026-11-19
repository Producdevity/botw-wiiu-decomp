#include "botw/teardown.h"

extern "C" void fn_0203c004(void* object, unsigned flags);

extern "C" void fn_0203f9f8(void* object, unsigned flags) {
    teardown::destroy<fn_0203c004, 0, 0>(object, flags);
}
