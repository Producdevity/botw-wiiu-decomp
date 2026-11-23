extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02606964(void*, const void*);
extern "C" unsigned char data_100f573c[];

extern "C" void* fn_02607744(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(56);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02606964(storage, a);
    *(const void**)((char*)storage + 12) = data_100f573c;
    *(unsigned*)((char*)storage + 52) = 0;
    return storage;
}
