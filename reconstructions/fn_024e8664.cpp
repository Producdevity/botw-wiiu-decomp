extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025d7af0(void*, const void*);
extern "C" unsigned char data_100cd0e4[];

extern "C" void* fn_024e8664(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(168);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025d7af0(storage, a);
    *(const void**)((char*)storage + 12) = data_100cd0e4;
    *(unsigned*)((char*)storage + 164) = 0;
    return storage;
}
