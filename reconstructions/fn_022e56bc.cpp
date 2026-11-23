extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02437f54(void*, const void*);
extern "C" unsigned char data_10079a7c[];

extern "C" void* fn_022e56bc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    fn_02437f54(storage, arg);
    *(const void**)((char*)storage + 12) = data_10079a7c;
    return storage;
}
