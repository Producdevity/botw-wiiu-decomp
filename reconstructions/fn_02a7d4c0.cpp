extern "C" void fn_03318868(void *, void *);
extern "C" void *data_1046d780;

extern "C" int fn_02a7d4c0(void)
{
  if (data_1046d780 != 0) {
    int state = 0;
    int *out = &state;
    fn_03318868(data_1046d780, out);
    if (state == 6) {
      return 1;
    }
  }
  return 0;
}
