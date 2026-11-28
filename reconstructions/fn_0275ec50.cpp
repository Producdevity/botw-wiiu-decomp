namespace {
struct Callbacks {
    char padding_0[0x1C];
    int (*reset)(void *);
};
struct Object {
    void *child;
    char padding_4[0x20];
    char member[0x1C];
    char flag_40;
    char padding_41[3];
    Callbacks *callbacks;
};
}

extern "C" int fn_02e14da8(int, int);
extern "C" void fn_0339bd58(void *);
extern "C" void fn_0378da14(void *);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_101267d8;

extern "C" void fn_0275ec50(void *object) {
    fn_0339bd58(((Object *)object)->child);
    ((Object *)object)->flag_40 = 0;
    fn_0378da14(((Object *)object)->member);
    ((Object *)object)->callbacks->reset(((Object *)object)->member);
    fn_02e14da8(0, 0);
    fn_037b8284(object, &data_101267d8, 0);
}
