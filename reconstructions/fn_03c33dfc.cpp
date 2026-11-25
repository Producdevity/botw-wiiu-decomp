extern "C" void fn_03c33d44(void *);
extern "C" int data_105b7f10;
extern "C" int data_105b7f30;

extern "C" void *fn_03c33dfc(void)
{
  int initialized = data_105b7f30;
  if (initialized == 0) {
    data_105b7f30 = 1;
    fn_03c33d44(&data_105b7f10);
  }
  return &data_105b7f10;
}
