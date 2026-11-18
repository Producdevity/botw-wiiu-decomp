#include "botw/teardown.h"

extern "C" void fn_022d2f54(void* object, unsigned flags);

extern "C" void fn_022dd864(void* object, unsigned flags) {
    teardown::destroy<fn_022d2f54, 0, 0>(object, flags);
}
