#include "botw/descriptor_predicate.h"

extern "C" const int data_1019b5c4;
extern "C" const int data_10263910;
extern "C" void fn_0314b498(void* receiver, void* object, const void* descriptor);

extern "C" void fn_02a910f8(void* receiver, char* base) {
    char* object = base + 20;
    if (object) {
        descriptor_predicate::Descriptor descriptor;
        descriptor.dispatch = &data_10263910;
        descriptor.payload = &data_1019b5c4;
        fn_0314b498(receiver, object, &descriptor);
    }
}
