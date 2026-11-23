#include "botw/descriptor_predicate.h"

extern "C" const int data_1018cda8;
extern "C" const int data_10263910;
extern "C" void fn_0314b5a0(void* receiver, void* object, const void* descriptor);

extern "C" void fn_02a526ec(void* receiver, char* base) {
    char* object = base + 20;
    if (object) {
        descriptor_predicate::Descriptor descriptor;
        descriptor.dispatch = &data_10263910;
        descriptor.payload = &data_1018cda8;
        fn_0314b5a0(receiver, object, &descriptor);
    }
}
