extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022f88cc(void*, const void*);
extern "C" unsigned char data_1006464c[];

extern "C" void* fn_0225d1ac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(148);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_022f88cc(storage, a);
    *(const void**)((char*)storage + 12) = data_1006464c;
    *(unsigned*)((char*)storage + 144) = 0;
    return storage;
}
