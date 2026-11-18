#include "botw/teardown.h"

extern "C" void fn_02896460(void* object, unsigned flags);

extern "C" void fn_028933d8(void* object, unsigned flags) {
    teardown::destroy<fn_02896460, 0, 0>(object, flags);
}
