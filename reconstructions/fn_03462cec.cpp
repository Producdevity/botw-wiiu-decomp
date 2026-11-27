extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_03462b48(void*);
extern "C" void fn_03462bcc(void*, int, void*);

extern "C" void* fn_03462cec(int id, void* heap) {
    void* object = fn_0308e5a0(0x3CU, heap, 4);

    if (object != 0) {
        object = fn_03462b48(object);
    }
    fn_03462bcc(object, id, heap);
    return object;
}
