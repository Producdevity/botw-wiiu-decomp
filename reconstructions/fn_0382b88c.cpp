extern "C" void fn_03b9f3f4(void*);
extern "C" void fn_03b9f5f0(void*);

namespace {
struct Child {
    char padding_0[0x50];
    unsigned char flags;
};
struct Object {
    char padding_0[0x40];
    Child *child;
};
}

extern "C" void fn_0382b88c(void* object)
{
    Child *child = ((Object *) object)->child;
    if (child != 0 && !((child->flags >> 1) & 1)) {
        void* target = child;
        fn_03b9f3f4(target);
        fn_03b9f5f0(((Object *) object)->child);
    }
}
