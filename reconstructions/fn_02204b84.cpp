typedef unsigned char u8;

extern "C" void fn_0223175c(void *);
extern "C" void fn_0339e0c0(void*, void*);
extern "C" const unsigned char data_10549dd0[];

namespace {
struct Object {
    void *owner;
    char padding_4[0x24];
    u8 *flag;
};
}

extern "C" void fn_02204b84(void *object) {
    fn_0223175c(object);
    if (*((Object *) object)->flag != 0) {
        fn_0339e0c0(((Object *) object)->owner, (void *) data_10549dd0);
    }
}
