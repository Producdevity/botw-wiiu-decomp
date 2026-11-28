extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030bb668(void*);

extern "C" void** fn_02d78a10(void** object, void* target) {
    void** self = object;
    if (self != 0 || (self = (void**)fn_0308e578(4U), self != 0)) {
        *self = target;
        fn_030bb668(target);
    }
    return self;
}
