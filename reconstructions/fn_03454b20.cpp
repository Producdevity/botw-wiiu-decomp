#include "botw/teardown.h"

extern "C" void fn_03453f70(void* object, unsigned flags);

extern "C" void fn_03454b20(void* object, unsigned flags) {
    teardown::destroy<fn_03453f70, 0, 0>(object, flags);
}
