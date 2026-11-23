extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" int data_10009d0c;
extern "C" unsigned char data_10067c08[];

extern "C" void* fn_0226c7b4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0379468c(storage, a);
    *(const void**)((char*)storage + 16) = &data_10009d0c;
    *(const void**)((char*)storage + 12) = data_10067c08;
    return storage;
}
