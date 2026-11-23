extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0221d928(void*, const void*);
extern "C" unsigned char data_100547d4[];

extern "C" void* fn_0220dca8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0221d928(storage, a);
    *(const void**)((char*)storage + 12) = data_100547d4;
    *(unsigned*)((char*)storage + 24) = 0;
    return storage;
}
