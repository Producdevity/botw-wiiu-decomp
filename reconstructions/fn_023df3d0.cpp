extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0226abcc(void*, const void*);
extern "C" unsigned char data_100a5518[];

extern "C" void* fn_023df3d0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    fn_0226abcc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a5518;
    return storage;
}
