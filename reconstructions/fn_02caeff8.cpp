extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02432724(void*, const void*);
extern "C" unsigned char data_101d3ec4[];

extern "C" void* fn_02caeff8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    fn_02432724(storage, arg);
    *(const void**)((char*)storage + 12) = data_101d3ec4;
    return storage;
}
