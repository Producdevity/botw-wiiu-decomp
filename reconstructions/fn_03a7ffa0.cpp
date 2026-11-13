#include "botw/memory.h"

extern "C" void fn_03a4d6dc(void*);

extern "C" void fn_03a7ffa0(unsigned char* object) {
    if (!object[808] && *reinterpret_cast<unsigned*>(object))
        fn_03a4d6dc(object);
    object[808] = 0;
    fn_03a4d6c8(reinterpret_cast<unsigned*>(object));
}
