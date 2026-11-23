extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02f07670(void* storage, const void* arg);
extern "C" void fn_02f351b4(void*);
extern "C" unsigned char data_102292b0[];

extern "C" void* fn_02f2e094(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(1256);
        if (!storage)
            return storage;
    }
    fn_02f07670(storage, arg);
    *(const void**)((char*)storage + 16) = data_102292b0;
    *(unsigned*)((char*)storage + 164) = 0;
    *(unsigned*)((char*)storage + 168) = 0;
    *(unsigned*)((char*)storage + 172) = 0;
    *(unsigned*)((char*)storage + 176) = 0;
    *(unsigned*)((char*)storage + 180) = 0;
    *(unsigned*)((char*)storage + 184) = 0;
    *(unsigned*)((char*)storage + 188) = 0;
    *(unsigned*)((char*)storage + 192) = 0;
    *(unsigned*)((char*)storage + 196) = 0;
    *(unsigned*)((char*)storage + 200) = 0;
    *(unsigned*)((char*)storage + 204) = 0;
    {
        char* m1 = (char*)storage + 208;
        if (!m1)
            m1 = (char*)fn_0308e578(168);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned short*)(m1 + 4) = 0;
            *(unsigned short*)(m1 + 6) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 376;
        if (!m2)
            m2 = (char*)fn_0308e578(168);
        if (m2) {
            *(unsigned*)(m2) = 0;
            *(unsigned short*)(m2 + 4) = 0;
            *(unsigned short*)(m2 + 6) = 0;
        }
    }
    fn_02f351b4((char*)storage + 544);
    *(unsigned char*)((char*)storage + 1244) = 0;
    *(unsigned char*)((char*)storage + 1245) = 0;
    *(unsigned*)((char*)storage + 1248) = 0;
    *(unsigned*)((char*)storage + 1252) = 0;
    return storage;
}
