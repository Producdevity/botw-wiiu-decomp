extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026a7e70(void*, const void*);
extern "C" unsigned char data_1017837c[];

extern "C" void* fn_029ac18c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_026a7e70(storage, a);
    *(const void**)((char*)storage + 12) = data_1017837c;
    *(unsigned char*)((char*)storage + 100) = 1;
    *(unsigned*)((char*)storage + 104) = 0;
    return storage;
}
