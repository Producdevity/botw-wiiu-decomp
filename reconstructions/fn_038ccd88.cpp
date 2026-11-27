extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_038ccb44();
extern "C" void fn_038ccc88(void*, void*);

extern "C" void* fn_038ccd88(void* heap) {
    void* memory;
    void* object;

    memory = fn_0308e5a0(0xA8U, heap, 4);
    object = memory;
    if (memory != 0) {
        object = fn_038ccb44();
    }
    fn_038ccc88(object, heap);
    return object;
}
