#include "botw/teardown.h"

extern "C" void fn_022254ec(void* object, unsigned flags);

extern "C" void fn_022154fc(void* object, unsigned flags) {
    teardown::destroy<fn_022254ec, 0, 0>(object, flags);
}
