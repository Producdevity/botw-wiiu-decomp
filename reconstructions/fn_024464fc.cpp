extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0244682c(void*, const void*);
extern "C" unsigned char data_100b6f1c[];

extern "C" void* fn_024464fc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_0244682c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100b6f1c;
    return storage;
}
