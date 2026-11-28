typedef int s32;

extern "C" int fn_02653024(void*);
extern "C" void fn_0295ab5c(void*);

extern "C" s32 fn_02620044(void **object) {
    if (fn_02653024(object) == 0) {
        return 0;
    }
    fn_0295ab5c(*object);
    return 1;
}
