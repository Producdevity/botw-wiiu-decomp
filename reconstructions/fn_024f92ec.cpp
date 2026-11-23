extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_024faf5c(void*, const void*);
extern "C" unsigned char data_100cfc7c[];

extern "C" void* fn_024f92ec(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(956);
        if (!storage)
            return storage;
    }
    fn_024faf5c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100cfc7c;
    return storage;
}
