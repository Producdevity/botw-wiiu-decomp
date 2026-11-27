extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_03330bc8(void*);
extern "C" void fn_03330f00(void*, int, void*);

extern "C" void* fn_03331148(int id, void* heap) {
    void* object = fn_0308e5a0(0xA4U, heap, 4);

    if (object != 0) {
        object = fn_03330bc8(object);
    }
    fn_03330f00(object, id, heap);
    return object;
}
