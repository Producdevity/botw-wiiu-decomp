extern "C" int data_102d4410;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0350f9e0(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_037b7cf0(storage, a);
    *(const void**)((char*)storage + 12) = &data_102d4410;
    *(int*)((char*)storage + 32) = 0;
    void* field = (char*)storage + 32;
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
