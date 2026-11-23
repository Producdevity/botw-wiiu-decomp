extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0245a838(void*, const void*);
extern "C" unsigned char data_100bc214[];

extern "C" void* fn_024624d0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(92);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0245a838(storage, a);
    *(const void**)((char*)storage + 12) = data_100bc214;
    *(unsigned*)((char*)storage + 84) = 0;
    *(unsigned*)((char*)storage + 88) = 0;
    return storage;
}
