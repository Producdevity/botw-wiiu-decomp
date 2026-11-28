extern "C" void fn_0361fde8(void*, void*, float);
extern "C" void* data_1047b444;

namespace {
struct Object {
    unsigned char padding_0[0x10];
    float* source;
    void** slot;
};
}

extern "C" int fn_03264670(void* self)
{
    Object* object = (Object*)self;
    void* handle = *object->slot;
    if (handle != (void*)-1) {
        *object->slot = (void*)-1;
        if (data_1047b444 != 0) {
            fn_0361fde8(data_1047b444, handle, *object->source);
        }
    }
    return 1;
}
