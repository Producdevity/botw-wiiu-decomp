extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0217fa9c(void*, const void*);
extern "C" unsigned char data_10038158[];

extern "C" void* fn_02180fbc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(260);
        if (!storage)
            return storage;
    }
    fn_0217fa9c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10038158;
    return storage;
}
