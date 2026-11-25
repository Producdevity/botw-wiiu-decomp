extern "C" void fn_037ff8fc(void *);
extern "C" char *data_1047c3d8;

extern "C" int fn_02c587cc(void *self)
{
  int *state = (int *)((char *)self + 0x158);
  if (*state != 1 && *(int *)((char *)self + 0x14) == 0) {
    fn_037ff8fc(data_1047c3d8);
  }
  return 1;
}
