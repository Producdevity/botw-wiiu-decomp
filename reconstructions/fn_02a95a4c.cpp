extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0314b124(void*, const void*);
extern "C" unsigned char data_1019ca34[];

extern "C" void* fn_02a95a4c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_0314b124(storage, arg);
    *(const void**)((char*)storage + 12) = data_1019ca34;
    return storage;
}
