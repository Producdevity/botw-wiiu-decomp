#include "botw/teardown.h"

extern "C" void fn_029ba440(void* object, unsigned flags);

extern "C" void fn_029bdaf4(void* object, unsigned flags) {
    teardown::destroy<fn_029ba440, 0, 0>(object, flags);
}
