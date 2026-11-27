extern "C" void fn_04129ba0(void*, void*, void*, void*);
extern "C" void fn_04157ff0(void*);
extern "C" void fn_04158488(void);

extern "C" unsigned char data_105c9af4;

extern "C" int fn_04121b54(void *arg0, void *arg1, void *arg2, void *arg3) {
    if (data_105c9af4 == 0) {
        fn_04158488();
        fn_04157ff0(&data_105c9af4);
        if (data_105c9af4 == 0) {
            return 0;
        }
    }
    fn_04129ba0(arg0, arg1, arg2, arg3);
    return 1;
}
