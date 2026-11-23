extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02501d20(void*, const void*);
extern "C" unsigned char data_100cf930[];

extern "C" void* fn_024f8af0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    fn_02501d20(storage, arg);
    *(const void**)((char*)storage + 12) = data_100cf930;
    return storage;
}
