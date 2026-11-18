#include "botw/ghs_intrinsics.h"

extern "C" void fn_033a5600(void* context);
extern "C" void fn_033a5688(void* context);

extern "C" void fn_033a57e4(void* context) {
    __schedule_barrier();
    fn_033a5600(context);
    fn_033a5688(context);
}
