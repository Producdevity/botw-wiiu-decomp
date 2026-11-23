extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0221d928(void*, const void*);
extern "C" unsigned char data_10051f94[];

extern "C" void* fn_02202a44(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_0221d928(storage, arg);
    *(const void**)((char*)storage + 12) = data_10051f94;
    return storage;
}
