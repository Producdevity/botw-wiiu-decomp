#include "botw/teardown.h"

extern "C" void fn_026547ac(void* object, unsigned flags);

extern "C" void fn_02656884(void* object, unsigned flags) {
    teardown::destroy<fn_026547ac, 0, 0>(object, flags);
}
