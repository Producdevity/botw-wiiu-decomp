#include "botw/teardown.h"

extern "C" void fn_02108130(void* object, unsigned flags);

extern "C" void fn_021093dc(void* object, unsigned flags) {
    teardown::destroy<fn_02108130, 0, 0>(object, flags);
}
