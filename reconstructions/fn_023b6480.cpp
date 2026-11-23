extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022f88cc(void*, const void*);
extern "C" unsigned char data_1009eb94[];

extern "C" void* fn_023b6480(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(148);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_022f88cc(storage, a);
    *(const void**)((char*)storage + 12) = data_1009eb94;
    *(unsigned*)((char*)storage + 144) = 0;
    return storage;
}
