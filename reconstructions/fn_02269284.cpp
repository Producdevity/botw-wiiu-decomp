extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02266c2c(void*, const void*);
extern "C" unsigned char data_10066b34[];

extern "C" void* fn_02269284(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_02266c2c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10066b34;
    return storage;
}
