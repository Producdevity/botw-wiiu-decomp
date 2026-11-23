extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021ead54(void*, const void*);
extern "C" unsigned char data_1005f520[];

extern "C" void* fn_0223e5b8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021ead54(storage, a);
    *(const void**)((char*)storage + 12) = data_1005f520;
    *(unsigned*)((char*)storage + 40) = 0;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
