extern "C" void* fn_0308e578(unsigned);

extern "C" int data_10337788;

namespace {
struct Object {
    int* vtable;
    int first;
    int second;
};
}

extern "C" void fn_03906114(void *memory)
{
    Object* self = (Object*) memory;
    if (self == 0) {
        self = (Object*) fn_0308e578(0xC);
    }
    if (self != 0) {
        self->vtable = &data_10337788;
        self->first = 0;
        self->second = 0;
    }
}
