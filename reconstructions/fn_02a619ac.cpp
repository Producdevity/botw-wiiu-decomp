extern "C" int data_101904f8;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0314b124(void* storage, const void* source);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02a619ac(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0314b124(storage, a);
    *(const void**)((char*)storage + 12) = &data_101904f8;
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
