extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0263aed8(void*, const void*);
extern "C" unsigned char data_100fc5b8[];

extern "C" void* fn_02636784(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_0263aed8(storage, arg);
    *(const void**)((char*)storage + 12) = data_100fc5b8;
    return storage;
}
