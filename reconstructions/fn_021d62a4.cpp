extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0327f60c(void*, const void*);
extern "C" unsigned char data_10047500[];
extern "C" const unsigned char data_10047630[];

extern "C" void* fn_021d62a4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0327f60c(storage, a);
    *(const void**)((char*)storage + 12) = data_10047500;
    *(const void**)((char*)storage + 24) = data_10047630;
    return storage;
}
