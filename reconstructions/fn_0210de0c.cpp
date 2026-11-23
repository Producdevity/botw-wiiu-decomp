extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020f4ae0(void*, const void*);
extern "C" unsigned char data_10023844[];

extern "C" void* fn_0210de0c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(112);
        if (!storage)
            return storage;
    }
    fn_020f4ae0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10023844;
    return storage;
}
