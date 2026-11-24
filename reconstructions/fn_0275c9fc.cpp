extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" void* fn_0312534c(void*);
extern "C" const unsigned char data_1012602c;

extern "C" void* fn_0275c9fc(void* storage, const void* source) {
    if (storage == 0) {
        storage = fn_0308e578(0x90);
        if (storage == 0) {
            return storage;
        }
    }
    fn_037b7cf0(storage, source);
    *(const void**)((char*)storage + 0xC) = &data_1012602c;
    fn_0312534c((char*)storage + 0x20);
    return storage;
}
