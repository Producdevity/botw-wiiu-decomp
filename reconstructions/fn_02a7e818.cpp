extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0314b124(void*, const void*);
extern "C" unsigned char data_10196f8c[];

extern "C" void* fn_02a7e818(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0314b124(storage, a);
    *(const void**)((char*)storage + 12) = data_10196f8c;
    *(unsigned*)((char*)storage + 16) = 0;
    return storage;
}
