struct Body;
struct BodyOwner;
extern "C" Body *fn_0348cbf8(const BodyOwner *);
extern "C" const float data_102c9b24;

extern "C" float fn_0348e4e4(struct BodyOwner *self)
{
  int offset = 0x80;
  char flag = *(int *)((char *)self + 0x50) & 1;
  if ((unsigned char)(flag ^ 1) != 0 && *(int *)((char *)self + offset) != 0) {
    return *(float *)((char *)fn_0348cbf8(self) + 0x84);
  }
  return data_102c9b24;
}
