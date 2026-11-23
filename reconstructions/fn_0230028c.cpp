extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0214e2f4(void*, const void*);
extern "C" unsigned char data_1007e008[];

extern "C" void* fn_0230028c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0214e2f4(storage, a);
    *(const void**)((char*)storage + 12) = data_1007e008;
    *(unsigned*)((char*)storage + 76) = 0;
    return storage;
}
