typedef int s32;

extern "C" int fn_0294ee18(void*);

extern "C" s32 fn_0273935c(void **arg0) {
    s32 temp_r3;

    temp_r3 = fn_0294ee18(*arg0);
    if ((temp_r3 != 2) && (temp_r3 != 3)) {
        return 0;
    }
    return 1;
}
