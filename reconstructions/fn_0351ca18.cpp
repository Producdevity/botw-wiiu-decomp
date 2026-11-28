typedef int s32;
typedef float f32;

extern "C" void fn_0351c5fc(void*, float);
extern "C" void fn_0351c668(void*);
extern "C" void fn_03571f68(void*, int);

extern "C" f32 data_102d60d0;
extern "C" s32 data_104722a8;

extern "C" void fn_0351ca18(void *object) {
    fn_0351c5fc(object, data_102d60d0);
    fn_03571f68((void *)(data_104722a8 + 0x180), 0);
    fn_0351c668(object);
}
