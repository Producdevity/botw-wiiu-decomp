typedef int s32;
typedef float f32;

extern "C" void fn_02d4db2c(void*, void*, int, void*, float);
extern "C" void fn_02e65d74(void*);

extern "C" f32 data_101e4b64;

extern "C" void fn_02d4e044(void *arg0) {
    struct { s32 f8; } sp;

    fn_02e65d74(&sp.f8);
    fn_02d4db2c(arg0, &sp.f8, -1, (void *)-1, data_101e4b64);
}
