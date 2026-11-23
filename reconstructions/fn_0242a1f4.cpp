extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_024284ec(void*, const void*);
extern "C" unsigned char data_100b24b8[];

extern "C" void* fn_0242a1f4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    fn_024284ec(storage, arg);
    *(const void**)((char*)storage + 12) = data_100b24b8;
    return storage;
}
