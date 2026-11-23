extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02739274(void*, const void*);
extern "C" unsigned char data_10120e60[];

extern "C" void* fn_02739628(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_02739274(storage, arg);
    *(const void**)((char*)storage + 12) = data_10120e60;
    return storage;
}
