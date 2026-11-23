extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_101270d8[];

extern "C" void* fn_02760e7c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(160);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_101270d8;
    {
        char* m1 = (char*)storage + 32;
        if (!m1)
            m1 = (char*)fn_0308e578(128);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
            *(unsigned*)(m1 + 16) = 0;
            *(unsigned*)(m1 + 20) = 0;
            *(unsigned*)(m1 + 24) = 0;
            *(unsigned*)(m1 + 28) = 0;
            *(unsigned*)(m1 + 32) = 0;
            *(unsigned*)(m1 + 36) = 0;
            *(unsigned*)(m1 + 40) = 0;
            *(unsigned*)(m1 + 44) = 0;
            *(unsigned*)(m1 + 48) = 0;
            *(unsigned*)(m1 + 52) = 0;
            *(unsigned*)(m1 + 56) = 0;
            *(unsigned*)(m1 + 60) = 0;
            *(unsigned*)(m1 + 64) = 0;
            *(unsigned*)(m1 + 68) = 0;
            *(unsigned*)(m1 + 72) = 0;
            *(unsigned*)(m1 + 76) = 0;
            *(unsigned*)(m1 + 80) = 0;
            *(unsigned*)(m1 + 84) = 0;
            *(unsigned*)(m1 + 88) = 0;
            *(unsigned*)(m1 + 92) = 0;
            *(unsigned*)(m1 + 96) = 0;
            *(unsigned*)(m1 + 100) = 0;
            *(unsigned*)(m1 + 104) = 0;
            *(unsigned*)(m1 + 108) = 0;
            *(unsigned*)(m1 + 112) = 0;
            *(unsigned*)(m1 + 116) = 0;
            *(unsigned*)(m1 + 120) = 0;
            *(unsigned*)(m1 + 124) = 0;
        }
    }
    return storage;
}
