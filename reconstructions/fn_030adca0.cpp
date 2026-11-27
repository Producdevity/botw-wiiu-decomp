namespace {
struct Manager {
    char padding_0[0x20];
    unsigned char active;
};
}

extern "C" void fn_030acb24(void);
extern "C" void fn_030adb8c(void*);

extern "C" void* data_1046c8e8;

extern "C" void fn_030adca0(void) {
    Manager* manager = (Manager*)data_1046c8e8;
    if (manager != 0 && manager->active != 0) {
        fn_030adb8c(data_1046c8e8);
        return;
    }
    fn_030acb24();
}
