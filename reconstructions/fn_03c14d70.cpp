extern "C" void fn_03c14d28(void *);
struct ListNode;
extern "C" void fn_0420ce6c(ListNode *);
extern "C" struct ListNode data_1047f11c;
extern "C" int data_105983b0;
extern "C" int data_105a3f44;

extern "C" void *fn_03c14d70(void)
{
  if (data_105a3f44 == 0) {
    ListNode *list = &data_1047f11c;
    int one = 1;
    data_105a3f44 = one;
    fn_03c14d28(&data_105983b0);
    fn_0420ce6c(list);
  }
  return &data_105983b0;
}
