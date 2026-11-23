typedef signed char s8;
typedef int s32;

extern "C" void fn_03cb76a4(void*);
extern "C" void* fn_0434d1d8(void *, int, unsigned int);

extern "C" void fn_03caf7dc(void *arg0) {
    fn_03cb76a4(arg0);
    fn_0434d1d8((char *)arg0 + 0x4C, 0, 4U);
    (*(s8 *)((char *)(arg0) + (0x50))) = 0;
    (*(s8 *)((char *)(arg0) + (0x52))) = 0;
    (*(s8 *)((char *)(arg0) + (0x51))) = 0;
    (*(s32 *)((char *)(arg0) + (0x48))) = 0;
}
