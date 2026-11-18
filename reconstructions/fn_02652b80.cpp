#include "botw/teardown.h"

extern "C" void fn_0258ca78(void* object, unsigned flags);

extern "C" void fn_02652b80(void* object, unsigned flags) {
    teardown::destroy<fn_0258ca78, 0, 0>(object, flags);
}
