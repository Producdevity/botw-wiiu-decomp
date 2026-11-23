extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027fac3c(void*, const void*);
extern "C" unsigned char data_100e4be0[];

extern "C" void* fn_02582354(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(332);
        if (!storage)
            return storage;
    }
    fn_027fac3c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100e4be0;
    return storage;
}
