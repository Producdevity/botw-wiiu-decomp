extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_034d98f8(void*, void*);
extern "C" void fn_0406f4b8(int, void*);

namespace {
struct Source {
    char padding_0[92];
    int id;
};
}

extern "C" void* fn_034d9950(void* heap, void* source) {
    void* object = fn_0308e5a0(0xCU, heap, 4);

    if (object != 0) {
        object = fn_034d98f8(object, source);
    }
    fn_0406f4b8(((Source *)source)->id, object);
    return object;
}
