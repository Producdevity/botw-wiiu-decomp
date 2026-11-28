extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_039021d4(void*);
extern "C" void fn_03905b78(int, void*);

extern "C" void fn_038f0e28(char* self, void* heap) {
    void* object = fn_0308e5a0(0x1BC, heap, 4);
    if (object != 0) {
        object = fn_039021d4(object);
    }
    *(void**)(self + 8) = object;
    fn_03905b78((int)object, heap);
}
