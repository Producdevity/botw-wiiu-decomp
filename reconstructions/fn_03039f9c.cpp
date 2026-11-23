typedef int s32;

extern "C" int fn_0308060c(void*);
extern "C" int fn_03080658(void);

extern "C" s32 data_1046bd28;

extern "C" s32 fn_03039f9c(void *arg0) {
    if ((fn_0308060c(arg0) != 0) && (fn_03080658() == 0)) {
        return 0;
    }
    return data_1046bd28;
}
