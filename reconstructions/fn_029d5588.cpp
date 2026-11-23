extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029d47e0(void*, const void*);
extern "C" unsigned char data_10180dd0[];

extern "C" void* fn_029d5588(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    fn_029d47e0(storage, arg);
    *(const void**)((char*)storage + 16) = data_10180dd0;
    return storage;
}
