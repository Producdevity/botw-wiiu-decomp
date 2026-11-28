namespace {
struct Object {
    void *owner;
    char padding_4[0x2C];
    unsigned char flag;
};
}

extern "C" void fn_023bfae4(void*);
extern "C" void fn_023fec98(void *);
extern "C" void fn_02950904(void*);

extern "C" void fn_023bfcd8(void *object) {
    fn_023fec98(object);
    if (((Object *) object)->flag == 0) {
        fn_023bfae4(object);
    }
    fn_02950904(((Object *) object)->owner);
}
