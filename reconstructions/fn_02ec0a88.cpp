extern "C" int fn_02ec08d0(void*, void*, void*);
extern "C" int fn_02ec09e8(void*, void*, void*);

extern "C" void fn_02ec0a88(void *object, void *first, void *second)
{
  int result = fn_02ec08d0(object, first, second);
  if (result == 0)
  {
    fn_02ec09e8(object, first, second);
  }
}
