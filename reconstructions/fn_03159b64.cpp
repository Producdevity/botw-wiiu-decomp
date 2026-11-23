extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0315a034(void*, const void*);
extern "C" unsigned char data_10287e34[];

extern "C" void* fn_03159b64(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_0315a034(storage, arg);
    *(const void**)((char*)storage + 12) = data_10287e34;
    return storage;
}
