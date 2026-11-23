typedef void (*Method)(void*);

extern "C" void fn_024e57e4(void** object);

extern "C" void fn_024e57f4(void** object) {
    void* owner = *object;
    (*(Method*)((char*)*(void**)((char*)owner + 0xE8) + 0x30C))(owner);
    fn_024e57e4(object);
}
