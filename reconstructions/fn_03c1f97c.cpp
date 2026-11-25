extern "C" void fn_03c14d28(void *);
struct ListNode;
extern "C" void fn_0420ce6c(ListNode *);
extern "C" struct ListNode data_1047f14c;
extern "C" int data_10598870;
extern "C" int data_105a5038;

extern "C" void *fn_03c1f97c(void)
{
  if (data_105a5038 == 0) {
    data_105a5038 = 1;
    ListNode *list = &data_1047f14c;
    fn_03c14d28(&data_10598870);
    fn_0420ce6c(list);
  }
  return &data_10598870;
}
