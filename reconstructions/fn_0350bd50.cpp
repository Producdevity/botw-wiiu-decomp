typedef int s32;

extern "C" void fn_0350b448(void *);
extern "C" int fn_0350b68c(void*);
extern "C" int fn_0350b700(void*, int, void*);

extern "C" void fn_0350bd50(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_0350b68c(arg0);
    if ((temp_r3 != 0) && (fn_0350b700(arg0, temp_r3, (*(void **)((char *)(arg0) + (0x18)))) == 0)) {
        fn_0350b448(arg0);
        (*(s32 *)((char *)(arg0) + (0x1C))) = 0;
    }
}
