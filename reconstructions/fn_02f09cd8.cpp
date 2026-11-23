extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02f07670(void*, const void*);
extern "C" unsigned char data_10222af0[];

extern "C" void* fn_02f09cd8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(164);
        if (!storage)
            return storage;
    }
    fn_02f07670(storage, arg);
    *(const void**)((char*)storage + 16) = data_10222af0;
    return storage;
}
