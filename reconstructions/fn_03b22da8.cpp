#include "botw/memory.h"

extern "C" void fn_03a4d6dc(void*);

extern "C" void fn_03b22da8(unsigned* object) {
    if (object[639]) {
        fn_03a4d6dc(object + 639);
        fn_03a4d6c8(object + 639);
    }
}
