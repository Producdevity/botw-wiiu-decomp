extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02231908(void*, const void*);
extern "C" unsigned char data_1007c6a4[];

extern "C" void* fn_022f6e3c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    fn_02231908(storage, arg);
    *(const void**)((char*)storage + 12) = data_1007c6a4;
    return storage;
}
