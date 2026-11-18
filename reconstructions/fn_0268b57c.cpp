#include "botw/teardown.h"

extern "C" void fn_026f7208(void* object, unsigned flags);

extern "C" void fn_0268b57c(void* object, unsigned flags) {
    teardown::destroy<fn_026f7208, 0, 0>(object, flags);
}
