extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_034aa034(void*, const void*);
extern "C" unsigned char data_10333450[];

extern "C" void* fn_038da288(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_034aa034(storage, arg);
    *(const void**)((char*)storage + 0) = data_10333450;
    return storage;
}
