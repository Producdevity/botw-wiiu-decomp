extern "C" void fn_04129ba0(void*, void*, void*, void*);
extern "C" void fn_04157ff0(void*);
extern "C" void fn_04158488(void);

extern "C" unsigned char data_105c9af4;

extern "C" int fn_04121b54(void *first, void *second, void *third, void *fourth) {
    if (data_105c9af4 == 0) {
        fn_04158488();
        fn_04157ff0(&data_105c9af4);
        if (data_105c9af4 == 0) {
            return 0;
        }
    }
    fn_04129ba0(first, second, third, fourth);
    return 1;
}
