extern "C" unsigned char data_10184608[];
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_029e40bc(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_029e49e4(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_029e40bc(storage, a);
    *(const void**)((char*)storage + 16) = data_10184608;
    void* member = (char*)storage + 60;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        int offset = 0;
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + offset) = data_10263a00;
    }
    *(unsigned*)((char*)storage + 68) = 0;
    return storage;
}
