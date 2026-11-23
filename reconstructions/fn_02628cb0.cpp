extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_100fa7b8[];

extern "C" void* fn_02628cb0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_100fa7b8;
    return storage;
}
