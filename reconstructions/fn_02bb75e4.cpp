typedef int s32;

extern "C" int fn_02bb7560(void*);
extern "C" int fn_02bb7580(void*);
extern "C" void fn_02bb75a0(void*);

extern "C" void fn_02bb75e4(void *object) {
    s32 first = fn_02bb7560(object);

    if ((first | fn_02bb7580(object)) != 0) {
        fn_02bb75a0(object);
    }
}
