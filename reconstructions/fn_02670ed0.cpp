namespace {
struct Object {
    char padding_0[0x3C];
    unsigned char flag;
};
}

extern "C" void fn_02670d08(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" int data_1010589c;

extern "C" void fn_02670ed0(void *object) {
    if (((Object *) object)->flag == 0) {
        fn_02670d08(object);
    }
    fn_037b8284(object, &data_1010589c, 0);
}
