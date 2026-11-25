extern "C" void fn_03c1e214(void *);
extern "C" int data_10598394;
extern "C" int data_105a439c;

extern "C" void *fn_03c1e2e4(void)
{
  if (data_105a439c == 0) {
    void *instance = &data_10598394;
    data_105a439c = 1;
    fn_03c1e214(instance);
  }
  return &data_10598394;
}
