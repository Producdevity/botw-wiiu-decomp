extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0242a57c(void*, const void*);
extern "C" unsigned char data_1003018c[];

extern "C" void* fn_02157460(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    fn_0242a57c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003018c;
    return storage;
}
