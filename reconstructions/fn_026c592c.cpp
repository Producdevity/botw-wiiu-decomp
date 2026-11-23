extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025c19fc(void*, const void*);
extern "C" unsigned char data_1011190c[];

extern "C" void* fn_026c592c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(680);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025c19fc(storage, a);
    *(const void**)((char*)storage + 12) = data_1011190c;
    *(unsigned*)((char*)storage + 676) = 0;
    return storage;
}
