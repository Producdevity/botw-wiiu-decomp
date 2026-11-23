extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0236aa4c(void*, const void*);
extern "C" unsigned char data_10076794[];

extern "C" void* fn_022cbcd0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(172);
        if (!storage)
            return storage;
    }
    fn_0236aa4c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10076794;
    return storage;
}
