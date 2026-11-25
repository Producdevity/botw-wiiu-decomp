extern "C" void fn_03c17df0(void *);
struct ListNode;
extern "C" void fn_0420ce6c(ListNode *);
extern "C" struct ListNode data_1047f128;
extern "C" int data_1059a170;
extern "C" int data_105a3f48;

extern "C" void *fn_03c17f78(void)
{
  int *initialized = &data_105a3f48;
  if (*initialized == 0) {
    ListNode *list = &data_1047f128;
    data_105a3f48 = 1;
    fn_03c17df0(&data_1059a170);
    fn_0420ce6c(list);
  }
  return &data_1059a170;
}
