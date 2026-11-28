extern "C" void fn_02b63234(void*, void*, int);

namespace {
struct Child {
    char padding_0[0x26];
    unsigned short flags;
};
struct Owner {
    char padding_0[0x3B0];
    Child *child;
};
struct Object {
    Owner *owner;
    char padding_4[0x18];
    unsigned char *mode;
    char padding_20[0x18];
    char member[1];
};
}

extern "C" void fn_02421a50(void* object)
{
    Object *view = (Object *) object;
    fn_02b63234(view->owner, view->member, *view->mode);
    Child *child = view->owner->child;
    if (child != 0) {
        unsigned int flags = child->flags;
        flags &= ~1;
        child->flags = flags;
    }
}
