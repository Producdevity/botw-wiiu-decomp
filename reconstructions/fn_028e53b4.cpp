extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0253dd60(void*, const void*);
extern "C" unsigned char data_1015b570[];

extern "C" void* fn_028e53b4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(180);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0253dd60(storage, a);
    *(const void**)((char*)storage + 12) = data_1015b570;
    *(unsigned char*)((char*)storage + 176) = 0;
    return storage;
}
