extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025c19fc(void*, const void*);
extern "C" unsigned char data_10102688[];

extern "C" void* fn_0265b4f8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(676);
        if (!storage)
            return storage;
    }
    fn_025c19fc(storage, arg);
    *(const void**)((char*)storage + 12) = data_10102688;
    return storage;
}
