extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021a4568(void*, const void*);
extern "C" unsigned char data_1003e380[];

extern "C" void* fn_021a50f4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021a4568(storage, a);
    *(const void**)((char*)storage + 12) = data_1003e380;
    *(unsigned char*)((char*)storage + 32) = 0;
    return storage;
}
