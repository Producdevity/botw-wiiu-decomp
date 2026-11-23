extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02919844(void*, const void*);
extern "C" unsigned char data_10167324[];

extern "C" void* fn_02925f80(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_02919844(storage, arg);
    *(const void**)((char*)storage + 12) = data_10167324;
    return storage;
}
