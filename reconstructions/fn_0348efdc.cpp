struct Body;
struct BodyOwner;
extern "C" Body* fn_0348cbf8(const BodyOwner *);

namespace {
struct OwnerView {
    char padding_0[0x50];
    int flags;
    char padding_54[0x2C];
    int value;
};

struct BodyView {
    char padding_0[0x98];
    unsigned int flags;
};

inline OwnerView *viewOf(BodyOwner *owner)
{
    return reinterpret_cast<OwnerView *>(owner);
}

inline unsigned int bodyFlags(BodyOwner *owner)
{
    return reinterpret_cast<BodyView *>(fn_0348cbf8(owner))->flags;
}
}

extern "C" int fn_0348efdc(BodyOwner *owner)
{
    unsigned int flags;
    if (static_cast<unsigned char>((viewOf(owner)->flags & 1) ^ 1) != 0 && viewOf(owner)->value != 0) {
        flags = bodyFlags(owner) >> 8;
        return flags & 1;
    }
    return 0;
}
