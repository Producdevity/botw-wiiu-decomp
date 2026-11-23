typedef int s32;

extern "C" void fn_0256dff0(void*);
extern "C" int fn_02579490(void*);

extern "C" s32 fn_0256e064(void *arg0) {
    if (fn_02579490(arg0) == 0) {
        return 0;
    }
    fn_0256dff0(arg0);
    return 1;
}
