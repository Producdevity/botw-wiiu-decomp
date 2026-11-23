#include "botw/descriptor_predicate.h"

extern "C" const int data_1019fa0c;
extern "C" const int data_10263910;
extern "C" void fn_0314b3a8(void* receiver, void* object, const void* descriptor);

extern "C" void fn_02aa1d78(void* receiver, char* base) {
    char* object = base + 20;
    if (object) {
        descriptor_predicate::Descriptor descriptor;
        descriptor.dispatch = &data_10263910;
        descriptor.payload = &data_1019fa0c;
        fn_0314b3a8(receiver, object, &descriptor);
    }
}
