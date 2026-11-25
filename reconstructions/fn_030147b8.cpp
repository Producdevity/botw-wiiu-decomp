extern "C" void fn_02ec716c(void *, void *);
extern "C" void fn_03014484(void *);
extern "C" char *data_10469a30;

extern "C" void fn_030147b8(void *self)
{
  unsigned char found = 0;
  fn_02ec716c(data_10469a30, &found);
  char flag = found;
  if (flag != 0) {
    fn_03014484(self);
  }
}
