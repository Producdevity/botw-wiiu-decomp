typedef int s32;

extern "C" void fn_0357f68c(void*);
struct DependentNode;
extern "C" void fn_03b9f39c(DependentNode *);
extern "C" void fn_03b9f3f4(void*);

namespace {
struct Container {
    DependentNode *node;
    unsigned char padding_4[8];
    s32 count;
};
}

extern "C" void fn_0357f758(void *object) {
    Container *container = (Container *)object;
    fn_0357f68c(object);
    if (container->count > 0) {
        DependentNode *node = container->node;
        if (node != 0) {
            fn_03b9f39c(node);
            fn_03b9f3f4(node);
        }
    }
}
