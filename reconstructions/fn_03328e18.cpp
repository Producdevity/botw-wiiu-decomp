extern "C" int data_102b13ac;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_03328e18(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0379468c(storage, a);
    *(const void**)((char*)storage + 12) = &data_102b13ac;
    *(int*)((char*)storage + 16) = 0;
    void* field = (char*)storage + 16;
    void* member = (char*)field + 4;
    if (!member) {
        member = fn_0308e578(8);
        if (!member)
            return storage;
    }
    {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    return storage;
}
