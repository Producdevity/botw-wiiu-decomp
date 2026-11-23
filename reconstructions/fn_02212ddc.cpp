extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0221d928(void*, const void*);
extern "C" unsigned char data_10055d5c[];

extern "C" void* fn_02212ddc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0221d928(storage, a);
    *(const void**)((char*)storage + 12) = data_10055d5c;
    *(unsigned*)((char*)storage + 24) = 0;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
