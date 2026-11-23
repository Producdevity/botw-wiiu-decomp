extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02110818(void*, const void*);
extern "C" unsigned char data_10068188[];

extern "C" void* fn_0226dc58(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(76);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02110818(storage, a);
    *(const void**)((char*)storage + 12) = data_10068188;
    *(unsigned*)((char*)storage + 68) = 0;
    *(unsigned*)((char*)storage + 72) = 0;
    return storage;
}
