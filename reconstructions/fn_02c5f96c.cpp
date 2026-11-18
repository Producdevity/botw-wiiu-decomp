#include "botw/ghs_intrinsics.h"

extern "C" void fn_021fd338(unsigned char* object);
extern "C" void fn_021fd424(void* object);

extern "C" void fn_02c5f96c(void* object) {
    __schedule_barrier();
    fn_021fd338(static_cast<unsigned char*>(object));
    fn_021fd424(object);
}
