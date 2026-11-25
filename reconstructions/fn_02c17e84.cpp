extern "C" int fn_02c17e84(void *object, int value)
{
  int *field = (int *)((char *)object + 52);
  int bits = *field & value;
  return bits != 0;
}
