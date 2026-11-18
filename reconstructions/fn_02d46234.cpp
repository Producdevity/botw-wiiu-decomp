#include "botw/teardown.h"

extern "C" void fn_02d461cc(void* object, unsigned flags);

extern "C" void fn_02d46234(void* object, unsigned flags) {
    teardown::destroy<fn_02d461cc, 0, 0>(object, flags);
}
