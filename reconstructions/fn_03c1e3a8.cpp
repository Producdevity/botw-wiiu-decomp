extern "C" void fn_03c14cc0(void *);
struct ListNode;
extern "C" void fn_0420ce6c(ListNode *);
extern "C" struct ListNode data_1047f140;
extern "C" int data_105991f0;
extern "C" int data_105a43a4;

extern "C" void *fn_03c1e3a8(void)
{
  if (data_105a43a4 == 0) {
    data_105a43a4 = 1;
    void *instance = &data_105991f0;
    fn_03c14cc0(instance);
    ListNode *list = &data_1047f140;
    fn_0420ce6c(list);
  }
  return &data_105991f0;
}
