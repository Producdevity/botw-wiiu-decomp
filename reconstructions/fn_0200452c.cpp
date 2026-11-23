extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_024b6648(void*, const void*);
extern "C" unsigned char data_100018b4[];
extern "C" unsigned char data_10001a6c[];

extern "C" void* fn_0200452c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(92);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_024b6648(storage, a);
    *(const void**)((char*)storage + 28) = data_100018b4;
    *(const void**)((char*)storage + 32) = data_10001a6c;
    return storage;
}
