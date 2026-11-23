extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021a4568(void*, const void*);
extern "C" unsigned char data_1003e5b0[];

extern "C" void* fn_021a5ec4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_021a4568(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003e5b0;
    return storage;
}
