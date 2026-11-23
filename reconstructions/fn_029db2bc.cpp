extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029daaa4(void*, const void*);
extern "C" unsigned char data_101826d0[];

extern "C" void* fn_029db2bc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(232);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029daaa4(storage, a);
    *(const void**)((char*)storage + 16) = data_101826d0;
    *(unsigned*)((char*)storage + 228) = 0;
    return storage;
}
