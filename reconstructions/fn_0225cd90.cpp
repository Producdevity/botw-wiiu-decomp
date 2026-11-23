extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020f3fe4(void*, const void*);
extern "C" unsigned char data_100644d0[];

extern "C" void* fn_0225cd90(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(216);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_020f3fe4(storage, a);
    *(const void**)((char*)storage + 12) = data_100644d0;
    *(unsigned*)((char*)storage + 212) = 0;
    return storage;
}
