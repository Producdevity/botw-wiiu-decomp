struct Body;
struct BodyOwner;
extern "C" Body *fn_0348cbf8(const BodyOwner *);
extern "C" float data_102c9c34;
namespace {
struct OwnerView {
    char padding_0[0x50];
    int flags;
    char padding_54[0x2C];
    int value_80;
};
struct BodyView {
    char padding_0[0x80];
    float value;
};
}

extern "C" float fn_0348f098(struct BodyOwner *self)
{
  const OwnerView *owner = (const OwnerView *)self;
  unsigned short flag = owner->flags & 1;
  if ((unsigned char)(flag ^ 1) != 0 && owner->value_80 != 0) {
    return ((BodyView *)fn_0348cbf8(self))->value;
  }
  return data_102c9c34;
}
