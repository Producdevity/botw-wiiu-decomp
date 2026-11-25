extern "C" void fn_025b05e4(void *);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_100eb714;

extern "C" void fn_025b0674(void *self)
{
  char zero = 0;
  void *object = self;
  **(char **)object = zero;
  fn_025b05e4(object);
  fn_037b8284(*(void **)((char *)object + 4), &data_100eb714, 0);
}
