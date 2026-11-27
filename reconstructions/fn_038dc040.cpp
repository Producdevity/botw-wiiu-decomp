extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void fn_034d7e78(void*, void*);
extern "C" void* fn_038dbfbc(void*, int, int);

extern "C" void* fn_038dc040(int id, void* heap) {
    void* object = fn_0308e5a0(0x70U, heap, 4);

    if (object != 0) {
        object = fn_038dbfbc(object, id, 24);
    }
    fn_034d7e78(object, heap);
    return object;
}
