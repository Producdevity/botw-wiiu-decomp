extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022f88cc(void*, const void*);
extern "C" unsigned char data_100b8688[];

extern "C" void* fn_0244bc5c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(144);
        if (!storage)
            return storage;
    }
    fn_022f88cc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100b8688;
    return storage;
}
