extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021e4194(void*, const void*);
extern "C" unsigned char data_1004b610[];

extern "C" void* fn_021e4e28(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021e4194(storage, a);
    *(const void**)((char*)storage + 12) = data_1004b610;
    *(unsigned*)((char*)storage + 92) = 0;
    return storage;
}
