struct Body;
struct BodyOwner;
extern "C" Body *fn_0348cbf8(const BodyOwner *);
extern "C" const float data_102c9b24;
namespace {
struct OwnerView {
    char padding_0[0x50];
    int flags;
    char padding_54[0x2C];
    int value_80;
};
struct BodyView {
    char padding_0[0x84];
    float value;
};
}

extern "C" float fn_0348e4e4(struct BodyOwner *self)
{
  const OwnerView *owner = (const OwnerView *)self;
  char flag = owner->flags & 1;
  if ((unsigned char)(flag ^ 1) != 0 && owner->value_80 != 0) {
    return ((BodyView *)fn_0348cbf8(self))->value;
  }
  return data_102c9b24;
}
