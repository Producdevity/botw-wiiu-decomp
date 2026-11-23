typedef int s32;
typedef float f32;

extern "C" void fn_02438238(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10067144;
extern "C" s32 data_10067148;

extern "C" void fn_02269f40(void *arg0) {
    fn_02438238(arg0);
    fn_037946f0(arg0, (s32) &data_10067148, 0, 0, 0, data_10067144);
}
