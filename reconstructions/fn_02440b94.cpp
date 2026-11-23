extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0243f440(void*, const void*);
extern "C" unsigned char data_100b5e70[];

extern "C" void* fn_02440b94(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(152);
        if (!storage)
            return storage;
    }
    fn_0243f440(storage, arg);
    *(const void**)((char*)storage + 12) = data_100b5e70;
    return storage;
}
