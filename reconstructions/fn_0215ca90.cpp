typedef int s32;

extern "C" int fn_0215c9f8(void*);
extern "C" int fn_0215ca64(void*);

extern "C" s32 fn_0215ca90(void *arg0) {
    if ((fn_0215c9f8(arg0) == 0) || (fn_0215ca64(arg0) == 0)) {
        return 0;
    }
    return 1;
}
