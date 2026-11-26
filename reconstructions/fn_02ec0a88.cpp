extern "C" int fn_02ec08d0(void*, void*, void*);
extern "C" int fn_02ec09e8(void*, void*, void*);

extern "C" void fn_02ec0a88(void *arg0, void *arg1, void *arg2)
{
  int result = fn_02ec08d0(arg0, arg1, arg2);
  if (result == 0)
  {
    fn_02ec09e8(arg0, arg1, arg2);
  }
}
