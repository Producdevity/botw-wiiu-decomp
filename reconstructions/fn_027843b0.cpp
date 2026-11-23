extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0277ff18(void*, const void*);
extern "C" unsigned char data_1012bd94[];

extern "C" void* fn_027843b0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(644);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0277ff18(storage, a);
    *(const void**)((char*)storage + 12) = data_1012bd94;
    *(unsigned*)((char*)storage + 640) = 0;
    return storage;
}
