extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022f88cc(void*, const void*);
extern "C" unsigned char data_1003b7a0[];

extern "C" void* fn_02195c1c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(144);
        if (!storage)
            return storage;
    }
    fn_022f88cc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003b7a0;
    return storage;
}
