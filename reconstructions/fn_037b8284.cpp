#include "botw/descriptor_predicate.h"

extern "C" char data_10263910[];

extern "C" unsigned int fn_037b81a4(void* receiver, const descriptor_predicate::Descriptor* descriptor);
extern "C" void fn_037b7e9c(void* receiver, unsigned int index, void* value);

extern "C" void fn_037b8284(void* receiver, const void* key, void* value) {
    unsigned int result;
    unsigned int found;
    descriptor_predicate::Descriptor* query;
    descriptor_predicate::Descriptor descriptor;
    descriptor.payload = key;
    descriptor.dispatch = data_10263910;
    query = &descriptor;
    result = fn_037b81a4(receiver, query);
    unsigned int index = result;
    found = index;
    if (index != 0xffff) {
        fn_037b7e9c(receiver, found, value);
    }
}
