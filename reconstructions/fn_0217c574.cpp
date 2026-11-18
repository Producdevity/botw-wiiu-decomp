#include "botw/teardown.h"

extern "C" void fn_020c2b00(void* object, unsigned flags);

extern "C" void fn_0217c574(void* object, unsigned flags) {
    teardown::destroy<fn_020c2b00, 0, 0>(object, flags);
}
