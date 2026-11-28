typedef int s32;

extern "C" int fn_0294ee18(void*);

extern "C" s32 fn_0273935c(void **object) {
    s32 state = fn_0294ee18(*object);
    if ((state != 2) && (state != 3)) {
        return 0;
    }
    return 1;
}
