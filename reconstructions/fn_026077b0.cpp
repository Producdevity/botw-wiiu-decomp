#include "botw/teardown.h"

extern "C" void fn_02606a00(void* object, unsigned flags);

extern "C" void fn_026077b0(void* object, unsigned flags) {
    teardown::destroy<fn_02606a00, 0, 0>(object, flags);
}
