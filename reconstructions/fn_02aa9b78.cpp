extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" const unsigned char data_101a19dc[];

namespace {

struct Object {
    unsigned char base[12];
    const void* vtable;
};

typedef char ObjectSize[sizeof(Object) == 16 ? 1 : -1];

}

extern "C" void* fn_02aa9b78(void* object, void* argument) {
    if (!object) {
        object = fn_0308e578(sizeof(Object));
        if (!object) return 0;
    }
    fn_0379468c(object, argument);
    static_cast<Object*>(object)->vtable = data_101a19dc;
    return object;
}
