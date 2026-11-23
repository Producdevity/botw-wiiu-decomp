extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0292bdf8(void*, const void*);
extern "C" unsigned char data_10168594[];

extern "C" void* fn_0292b754(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0292bdf8(storage, a);
    *(const void**)((char*)storage + 12) = data_10168594;
    *(unsigned*)((char*)storage + 48) = 0;
    return storage;
}
