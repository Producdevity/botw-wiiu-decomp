typedef int s32;

extern "C" void fn_024f0460(void*);
extern "C" int fn_025d7ca0(void*, void*);

extern "C" s32 fn_024f062c(void *object, void *value) {
    if (fn_025d7ca0(object, value) == 0) {
        return 0;
    }
    fn_024f0460(object);
    return 1;
}
