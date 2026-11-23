extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026049a4(void*, const void*);
extern "C" unsigned char data_1010d9cc[];

extern "C" void* fn_026a6d04(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_026049a4(storage, arg);
    *(const void**)((char*)storage + 12) = data_1010d9cc;
    return storage;
}
