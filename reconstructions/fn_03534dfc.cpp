extern "C" void fn_03534da0(void);
extern "C" void fn_03571f68(void*, int);
extern "C" char* data_1047c390;

extern "C" int data_104722a8;

namespace {
struct Child {
    char padding_0[0x70];
    int value;
};
struct Manager {
    char padding_0[0x28];
    Child* child;
};
}

extern "C" void fn_03534dfc(void) {
    fn_03534da0();
    fn_03571f68((void *)(data_104722a8 + 0x180), 1);
    if (data_1047c390 != 0) {
        Child *child = ((Manager*)data_1047c390)->child;
        if (child != 0) {
            child->value = 0;
        }
    }
}
