extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02f07670(void* storage, const void* arg);
extern "C" void fn_030616ac(void*);
extern "C" unsigned char data_1022501c[];

extern "C" void* fn_02f16794(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(616);
        if (!storage)
            return storage;
    }
    fn_02f07670(storage, arg);
    *(const void**)((char*)storage + 16) = data_1022501c;
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
    *(unsigned*)((char*)storage + 208) = 0;
    *(unsigned*)((char*)storage + 212) = 0;
    *(unsigned*)((char*)storage + 216) = 0;
    *(unsigned*)((char*)storage + 220) = 0;
    *(unsigned*)((char*)storage + 224) = 0;
    *(unsigned*)((char*)storage + 228) = 0;
    *(unsigned*)((char*)storage + 232) = 0;
    *(unsigned*)((char*)storage + 236) = 0;
    fn_030616ac((char*)storage + 240);
    *(unsigned char*)((char*)storage + 612) = 0;
    return storage;
}
