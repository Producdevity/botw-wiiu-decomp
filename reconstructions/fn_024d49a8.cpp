#include "botw/teardown.h"

extern "C" void fn_026b3778(void* object, unsigned flags);

extern "C" void fn_024d49a8(void* object, unsigned flags) {
    teardown::destroy<fn_026b3778, 0, 0>(object, flags);
}
