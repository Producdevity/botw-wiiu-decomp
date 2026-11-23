#include "botw/ghs_intrinsics.h"

typedef void (*Action)(void*, void*);

extern "C" void fn_02c562cc(void* p) {
    char* self = (char*)p;
    void* target = *(void**)(self + 8);
    ((Action)(*(void* const* const*)((char*)target + 8))[13])(target, *(void**)(self + 4));
    *(int*)(self + 12) = 0;
    __schedule_barrier();
    *(int*)(self + 8) = 0;
}
