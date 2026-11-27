namespace {
struct Manager {
    char padding_0[0x20];
    unsigned char active;
};
}

extern "C" void fn_030ac9c4(void);
extern "C" void fn_030adb68(void*);

extern "C" void *data_1046c8e8;

extern "C" void fn_030adc50(void) {
    Manager *manager = (Manager *) data_1046c8e8;
    if (manager != 0 && manager->active != 0) {
        fn_030adb68(data_1046c8e8);
        return;
    }
    fn_030ac9c4();
}
