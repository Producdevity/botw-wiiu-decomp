extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022c0478(void*, const void*);
extern "C" unsigned char data_1007fbe4[];

extern "C" void* fn_02306130(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(112);
        if (!storage)
            return storage;
    }
    fn_022c0478(storage, arg);
    *(const void**)((char*)storage + 12) = data_1007fbe4;
    return storage;
}
