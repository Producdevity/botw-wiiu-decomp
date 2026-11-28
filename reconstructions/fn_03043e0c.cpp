extern "C" void* data_1046989c;
extern "C" void fn_02e6faec(void* p, float v);
extern "C" void fn_02e6faf4(void*, int, int);
extern "C" int fn_02e898f0(int);
extern "C" void fn_03043dcc(void*);

namespace {
struct Child {
    char padding_0[1440];
    float value;
};
struct Owner {
    char padding_0[0x1B68];
    Child* child;
};
struct Settings {
    char padding_0[88];
    int level;
};
}

extern "C" void fn_03043e0c(void* object) {
    if (((Owner*)object)->child != 0) {
        fn_03043dcc(object);
        Child* child = ((Owner*)object)->child;
        fn_02e6faec(child, child->value);
        int level = fn_02e898f0(((Settings*)data_1046989c)->level);
        if (level > 20) {
            level = 20;
        }
        fn_02e6faf4(((Owner*)object)->child, level, 0);
    }
}
