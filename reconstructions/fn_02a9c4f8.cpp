extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0314b124(void*, const void*);
extern "C" unsigned char data_1019e41c[];

extern "C" void* fn_02a9c4f8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_0314b124(storage, arg);
    *(const void**)((char*)storage + 12) = data_1019e41c;
    return storage;
}
