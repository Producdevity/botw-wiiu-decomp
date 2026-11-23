extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0297ba94(void*, const void*);
extern "C" unsigned char data_10173148[];

extern "C" void* fn_0297c190(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_0297ba94(storage, arg);
    *(const void**)((char*)storage + 12) = data_10173148;
    return storage;
}
