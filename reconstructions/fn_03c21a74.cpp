extern "C" void fn_03c219ec(void *);
struct ListNode;
extern "C" void fn_0420ce6c(ListNode *);
extern "C" struct ListNode data_1047f170;
extern "C" int data_1059e0b8;
extern "C" int data_105a5044;

extern "C" void *fn_03c21a74(void)
{
  int initialized = data_105a5044;
  int needsInit = initialized == 0;
  if (needsInit) {
    data_105a5044 = 1;
    fn_03c219ec(&data_1059e0b8);
    fn_0420ce6c(&data_1047f170);
  }
  return &data_1059e0b8;
}
