extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029ba35c(void*, const void*);
extern "C" unsigned char data_1017c684[];

extern "C" void* fn_029bda90(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(56);
        if (!storage)
            return storage;
    }
    fn_029ba35c(storage, arg);
    *(const void**)((char*)storage + 16) = data_1017c684;
    return storage;
}
