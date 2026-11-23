extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02913bdc(void*, const void*);
extern "C" unsigned char data_101632d8[];

extern "C" void* fn_02914400(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_02913bdc(storage, arg);
    *(const void**)((char*)storage + 12) = data_101632d8;
    return storage;
}
