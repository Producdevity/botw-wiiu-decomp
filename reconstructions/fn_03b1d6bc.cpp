#include "botw/ghs_intrinsics.h"

extern "C" void* fn_0308e578(unsigned size);
extern "C" const unsigned char data_10263910;

namespace {
struct Context {
    void* payload;
    const void* dispatch;
};
}

extern "C" void* fn_03b1d6bc(void* memory, void* payload) {
    __schedule_barrier();
    if (!memory) {
        memory = fn_0308e578(sizeof(Context));
        if (!memory)
            return memory;
    }
    Context* context = static_cast<Context*>(memory);
    context->payload = payload;
    context->dispatch = &data_10263910;
    return memory;
}
