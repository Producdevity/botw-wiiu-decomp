#include "botw/descriptor_predicate.h"
#include "botw/ghs_intrinsics.h"

extern "C" char data_1010bb98[];
extern "C" char data_10263910[];

extern "C" bool fn_0269e750(void* receiver) {
    descriptor_predicate::Descriptor descriptor;
    __schedule_barrier();
    descriptor.dispatch = data_10263910;
    descriptor.payload = data_1010bb98;
    return fn_037b82e8(receiver, &descriptor);
}
