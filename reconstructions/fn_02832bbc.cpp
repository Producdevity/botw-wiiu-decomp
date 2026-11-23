extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027fe7bc(void*, const void*);
extern "C" unsigned char data_10141158[];

extern "C" void* fn_02832bbc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_027fe7bc(storage, a);
    *(const void**)((char*)storage + 12) = data_10141158;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
