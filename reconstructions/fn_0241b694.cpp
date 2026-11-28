extern "C" void fn_0241bd3c(void *);
extern "C" void fn_0294f720(void *, int, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[7];
    unsigned char flags_b;
    char *table_c;
    char padding_10[0x54];
    char member_64[1];
};
}

extern "C" void fn_0241b694(void *self)
{
    fn_0241bd3c(self);
    unsigned char flags = ((Object *)self)->flags_b & ~4;
    ((Object *)self)->flags_b = flags;
    fn_0294f720(((Object *)self)->owner, 4, ((Object *)self)->member_64);
    (*(void (**)(void *))(((Object *)self)->table_c + 0x124))(self);
}
