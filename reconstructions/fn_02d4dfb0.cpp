typedef float f32;

extern "C" int fn_02d4c9d0(void*);
extern "C" void fn_02d4c820(void*, void*);
extern "C" void fn_02d4db2c(void*, void*, int, void*, float);

extern "C" f32 data_101e4b64;

extern "C" bool fn_02d4dfb0(void* owner) {
    struct { int f8; } sp;

    if (*((unsigned char*)owner + 0x900) != 0) {
        if ((*(unsigned int*)((char*)owner + 0x8DC) & 1) == 0 || fn_02d4c9d0(owner) != 0) {
            fn_02d4c820(owner, &sp.f8);
            fn_02d4db2c(owner, &sp.f8, -1, (void*)-1, data_101e4b64);
            return true;
        }
    }
    return false;
}
