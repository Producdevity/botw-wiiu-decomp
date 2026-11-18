#include "botw/teardown.h"

extern "C" void fn_023ec9ac(void* object, unsigned flags);

extern "C" void fn_023ec520(void* object, unsigned flags) {
    teardown::destroy<fn_023ec9ac, 0, 0>(object, flags);
}
