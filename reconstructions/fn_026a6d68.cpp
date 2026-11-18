#include "botw/teardown.h"

extern "C" void fn_02604a14(void* object, unsigned flags);

extern "C" void fn_026a6d68(void* object, unsigned flags) {
    teardown::destroy<fn_02604a14, 0, 0>(object, flags);
}
