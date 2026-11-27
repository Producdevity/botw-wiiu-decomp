extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_0334a854(void*, int);
extern "C" void fn_0334af84(void*, void*);

extern "C" void* fn_0334b1fc(int id, void* heap) {
    void* object = fn_0308e5a0(0x1D0U, heap, 4);

    if (object != 0) {
        object = fn_0334a854(object, id);
    }
    fn_0334af84(object, heap);
    return object;
}
