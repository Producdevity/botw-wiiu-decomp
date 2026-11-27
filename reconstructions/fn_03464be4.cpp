extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_03464660(void*);
extern "C" void fn_03464780(void*, int, void*);

extern "C" void* fn_03464be4(int id, void* heap) {
    void* object = fn_0308e5a0(0xC8U, heap, 4);

    if (object != 0) {
        object = fn_03464660(object);
    }
    fn_03464780(object, id, heap);
    return object;
}
