extern "C" void fn_02b0717c(unsigned int *);

namespace {
struct Owner {
    unsigned int padding_0[0x212];
    int value_848;
};

struct Object {
    char padding_0[0x28];
    Owner *owner_28;
};
}

extern "C" void fn_02e314a0(void *self, int *value)
{
    Owner *owner = ((Object *)self)->owner_28;
    if (owner != 0) {
        int newValue;
        fn_02b0717c(owner->padding_0);
        newValue = *value;
        owner->value_848 = newValue;
    }
}
