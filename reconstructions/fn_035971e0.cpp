typedef float f32;

extern "C" void fn_03597158(void*);
extern "C" int fn_03ba9c30(void*);
struct LinearRamp;
extern "C" void fn_03bb5814(LinearRamp *);

extern "C" void fn_035971e0(void *arg0) {
    if ((*(f32 *)((char *)(arg0) + (0xC))) != (*(f32 *)((char *)(arg0) + (0x14)))) {
        fn_03bb5814((LinearRamp *)((char *)arg0 + 0xC));
    }
    if (fn_03ba9c30((char *)arg0 + 4) != 0) {
        fn_03597158(arg0);
    }
}
