extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02175ddc(void*, const void*);
extern "C" unsigned char data_1003559c[];

extern "C" void* fn_02171c8c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    fn_02175ddc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003559c;
    return storage;
}
