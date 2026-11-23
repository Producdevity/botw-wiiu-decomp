typedef int s32;

extern "C" void fn_03bb60c8(void *, float, float);
extern "C" const float data_10012ad8;

extern "C" s32 data_1049cd6c;

extern "C" void fn_0209c18c(void *arg0) {
    fn_03bb60c8((char *)arg0 + 0xBEC, data_10012ad8, data_10012ad8);
    (*(s32 *)((char *)(arg0) + (0xC04))) = (s32) data_1049cd6c;
}
