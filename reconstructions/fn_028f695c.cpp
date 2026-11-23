extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02621ebc(void*, const void*);
extern "C" unsigned char data_1015de84[];

extern "C" void* fn_028f695c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    fn_02621ebc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1015de84;
    return storage;
}
