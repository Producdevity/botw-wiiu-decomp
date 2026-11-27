extern "C" void fn_03b92430(void*, void*);
namespace { struct Object { char padding_0[0x6C]; void *child; }; }

extern "C" void fn_03b92464(void *object) {
    void *child;

    child = ((Object *)object)->child;
    if (child != 0) {
        fn_03b92430(object, child);
        ((Object *)object)->child = 0;
    }
}
