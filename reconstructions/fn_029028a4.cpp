extern "C" int data_1015ff18;
extern "C" void* fn_037b7cf0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_029028a4(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = &data_1015ff18;
    *(unsigned*)((char*)storage + 32) = 0;
    *(unsigned char*)((char*)storage + 36) = 0;
    *(unsigned*)((char*)storage + 40) = 0;
    *(unsigned*)((char*)storage + 44) = 0;
    *(unsigned*)((char*)storage + 48) = 0;
    *(unsigned*)((char*)storage + 52) = 0;
    *(unsigned*)((char*)storage + 56) = 0;
    *(unsigned*)((char*)storage + 60) = 0;
    *(unsigned*)((char*)storage + 64) = 0;
    return storage;
}
