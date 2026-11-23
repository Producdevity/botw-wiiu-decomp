#include "botw/ghs_intrinsics.h"
#include "botw/heap_manager.h"

extern "C" void* data_1046c920;

extern "C" void* fn_037d36f8(void* heap) {
    __schedule_barrier();
    if (heap == 0) {
        heap = data_1046c920;
        if (heap != 0) {
            heap = fn_030aa1ac(data_1046c8b0);
        }
    }
    return heap;
}
