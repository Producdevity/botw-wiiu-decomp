#include "botw/teardown.h"

extern "C" void fn_026c3198(void* object, unsigned flags);

extern "C" void fn_026c2a54(void* object, unsigned flags) {
    teardown::destroy<fn_026c3198, 0, 0>(object, flags);
}
