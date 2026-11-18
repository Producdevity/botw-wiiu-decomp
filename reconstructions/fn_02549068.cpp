#include "botw/teardown.h"

extern "C" void fn_02547afc(void* object, unsigned flags);

extern "C" void fn_02549068(void* object, unsigned flags) {
    teardown::destroy<fn_02547afc, 0, 0>(object, flags);
}
