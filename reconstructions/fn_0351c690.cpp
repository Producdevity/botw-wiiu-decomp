typedef int s32;
typedef float f32;

extern "C" void fn_0351c5fc(void*, float);
extern "C" void fn_0351c668(void*);
extern "C" void fn_03571f68(void*, int);

extern "C" f32 data_102d60c0;
extern "C" s32 data_104722a8;

extern "C" void fn_0351c690(void *arg0) {
    fn_0351c5fc(arg0, data_102d60c0);
    fn_03571f68((void *)(data_104722a8 + 0x180), 1);
    fn_0351c668(arg0);
}
