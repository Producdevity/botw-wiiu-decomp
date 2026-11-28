#include "botw/descriptor_predicate.h"
#include "botw/ghs_intrinsics.h"

extern "C" bool fn_0252680c(void* receiver, const void* descriptor);

extern "C" char data_100d6bc4[];
extern "C" char data_10263910[];

extern "C" bool fn_025269c8(void* receiver) {
    descriptor_predicate::Descriptor descriptor;
    __schedule_barrier();
    descriptor.dispatch = data_10263910;
    descriptor.payload = data_100d6bc4;
    return fn_0252680c(receiver, &descriptor);
}
