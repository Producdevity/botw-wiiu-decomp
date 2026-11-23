extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02108060(void*, const void*);
extern "C" unsigned char data_10022848[];

extern "C" void* fn_02109378(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(148);
        if (!storage)
            return storage;
    }
    fn_02108060(storage, arg);
    *(const void**)((char*)storage + 12) = data_10022848;
    return storage;
}
