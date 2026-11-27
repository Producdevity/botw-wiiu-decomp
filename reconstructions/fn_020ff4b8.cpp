extern "C" void fn_0230b0cc(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);
extern "C" float data_10020d58;
extern "C" int data_10020d5c;

extern "C" void fn_020ff4b8(void *arg0, void *arg1)
{
  float scale = data_10020d58;
  fn_037946f0(arg0, (int) (&data_10020d5c), 1, 0, 0, scale);
  fn_0230b0cc(arg0, arg1);
}
