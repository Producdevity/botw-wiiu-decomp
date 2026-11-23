extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0242a57c(void*, const void*);
extern "C" unsigned char data_100b6c00[];

extern "C" void* fn_024452e4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0242a57c(storage, a);
    *(const void**)((char*)storage + 12) = data_100b6c00;
    *(unsigned*)((char*)storage + 52) = 0;
    *(unsigned*)((char*)storage + 56) = 0;
    return storage;
}
