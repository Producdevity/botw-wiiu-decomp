extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0236101c(void*, const void*);
extern "C" unsigned char data_1008f9f8[];

extern "C" void* fn_02362994(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    fn_0236101c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1008f9f8;
    return storage;
}
