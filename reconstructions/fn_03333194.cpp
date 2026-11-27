extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_03332ac4(void*);
extern "C" void fn_03332e54(void*, int, void*);

extern "C" void* fn_03333194(int id, void* heap) {
    void* object = fn_0308e5a0(0x128U, heap, 4);

    if (object != 0) {
        object = fn_03332ac4(object);
    }
    fn_03332e54(object, id, heap);
    return object;
}
