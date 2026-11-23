extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023fe510(void*, const void*);
extern "C" unsigned char data_100b8810[];

extern "C" void* fn_0244bf60(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_023fe510(storage, arg);
    *(const void**)((char*)storage + 12) = data_100b8810;
    return storage;
}
