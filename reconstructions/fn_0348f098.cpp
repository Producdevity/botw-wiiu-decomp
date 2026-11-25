struct Body;
struct BodyOwner;
extern "C" Body *fn_0348cbf8(const BodyOwner *);
extern "C" float data_102c9c34;

extern "C" float fn_0348f098(struct BodyOwner *self)
{
  char *flagsField = (char *)self + 0x50;
  unsigned short flag = *(int *)flagsField & 1;
  if ((unsigned char)(flag ^ 1) != 0 && *(int *)((char *)self + 0x80) != 0) {
    return *(float *)((char *)fn_0348cbf8(self) + 0x80);
  }
  return data_102c9c34;
}
