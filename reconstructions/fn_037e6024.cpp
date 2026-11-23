extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_037e5f68(void* object);
extern "C" void fn_03629580(void* member, unsigned flags);
extern "C" const unsigned char data_1031f334[];

namespace {

struct Object {
    unsigned char prefix[12];
    unsigned char member[32];
    const void* vtable;
};

typedef char ObjectSize[sizeof(Object) == 48 ? 1 : -1];

}

extern "C" void fn_037e6024(void* storage, unsigned flags) {
    Object* object = static_cast<Object*>(storage);
    if (object) {
        object->vtable = data_1031f334;
        fn_037e5f68(object);
        fn_03629580(object->member, 2);
        if (flags & 1) fn_0308e6d0(object);
    }
}
