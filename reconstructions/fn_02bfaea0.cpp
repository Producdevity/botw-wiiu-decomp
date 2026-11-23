extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02bfabc0(void*, const void*);
extern "C" unsigned char data_101bd55c[];
extern "C" unsigned char data_101bd694[];

extern "C" void* fn_02bfaea0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02bfabc0(storage, a);
    *(const void**)((char*)storage + 12) = data_101bd55c;
    *(const void**)((char*)storage + 36) = data_101bd694;
    return storage;
}
