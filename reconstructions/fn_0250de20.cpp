extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02618854(void*, const void*);
extern "C" unsigned char data_100d3a40[];

extern "C" void* fn_0250de20(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(188);
        if (!storage)
            return storage;
    }
    fn_02618854(storage, arg);
    *(const void**)((char*)storage + 12) = data_100d3a40;
    return storage;
}
