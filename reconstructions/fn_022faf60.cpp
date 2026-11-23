extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022fa35c(void*, const void*);
extern "C" unsigned char data_1007d140[];

extern "C" void* fn_022faf60(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_022fa35c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1007d140;
    return storage;
}
