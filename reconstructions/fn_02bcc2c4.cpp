extern "C" int data_101b96ac;
extern "C" int data_101b98ac;
extern "C" void fn_02bca8ec(void*, void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02bcc2c4(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(256);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02bca8ec(storage, (void*)a);
    *(const void**)((char*)storage + 12) = &data_101b96ac;
    *(const void**)((char*)storage + 20) = &data_101b98ac;
    *(unsigned*)((char*)storage + 192) = 0;
    *(unsigned*)((char*)storage + 196) = 0;
    *(unsigned*)((char*)storage + 200) = 0;
    *(unsigned*)((char*)storage + 204) = 0;
    *(unsigned*)((char*)storage + 208) = 0;
    *(unsigned*)((char*)storage + 212) = 0;
    *(unsigned*)((char*)storage + 216) = 0;
    *(unsigned*)((char*)storage + 220) = 0;
    *(unsigned*)((char*)storage + 224) = 0;
    *(unsigned*)((char*)storage + 228) = 0;
    *(unsigned*)((char*)storage + 232) = 0;
    *(unsigned*)((char*)storage + 236) = 0;
    *(unsigned*)((char*)storage + 240) = 0;
    *(unsigned*)((char*)storage + 244) = 0;
    *(unsigned*)((char*)storage + 248) = 0;
    *(unsigned*)((char*)storage + 252) = 0;
    return storage;
}
