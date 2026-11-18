#include "botw/teardown.h"

extern "C" void fn_02966288(void* object, unsigned flags);

extern "C" void fn_0261dbf4(void* object, unsigned flags) {
    teardown::destroy<fn_02966288, 0, 0>(object, flags);
}
