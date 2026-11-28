typedef int s32;

extern "C" void fn_0256dff0(void*);
extern "C" int fn_02579490(void*);

extern "C" s32 fn_0256e064(void *object) {
    if (fn_02579490(object) == 0) {
        return 0;
    }
    fn_0256dff0(object);
    return 1;
}
