#include "botw/teardown.h"

extern "C" void fn_0277ff98(void* object, unsigned flags);

extern "C" void fn_0278441c(void* object, unsigned flags) {
    teardown::destroy<fn_0277ff98, 0, 0>(object, flags);
}
