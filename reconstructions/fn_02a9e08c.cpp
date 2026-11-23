#include "botw/descriptor_predicate.h"

extern "C" const int data_1019eb10;
extern "C" const int data_10263910;
extern "C" void fn_0314b6a8(void* receiver, void* object, const void* descriptor);

extern "C" void fn_02a9e08c(void* receiver, char* base) {
    char* object = base + 20;
    if (object) {
        descriptor_predicate::Descriptor descriptor;
        descriptor.dispatch = &data_10263910;
        descriptor.payload = &data_1019eb10;
        fn_0314b6a8(receiver, object, &descriptor);
    }
}
