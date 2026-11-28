struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);
extern "C" int fn_0378c7b0(void*);
extern "C" void fn_0378c840(void*);

namespace {
struct Object {
    char padding_0[0x2C];
    int link_2c;
    unsigned char flag_30;
};
}

extern "C" void fn_0250bc7c(void *object) {
    if (fn_0378c7b0(&static_cast<Object *>(object)->link_2c) != 0) {
        fn_0378c840(&static_cast<Object *>(object)->link_2c);
    }
    if (static_cast<Object *>(object)->link_2c != 0 || static_cast<Object *>(object)->flag_30 != 0) {
        fn_0378c734(reinterpret_cast<ProcLink *>(&static_cast<Object *>(object)->link_2c));
    }
}
