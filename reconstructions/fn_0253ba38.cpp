extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026f70fc(void*, const void*);
extern "C" unsigned char data_100d9390[];

extern "C" void* fn_0253ba38(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(288);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_026f70fc(storage, a);
    *(const void**)((char*)storage + 12) = data_100d9390;
    *(unsigned char*)((char*)storage + 284) = 1;
    return storage;
}
