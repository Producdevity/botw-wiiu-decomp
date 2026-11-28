extern "C" void fn_03c21620(void *);
struct ListNode;
extern "C" void fn_0420ce6c(ListNode* node);
extern "C" struct ListNode data_1047f164;
extern "C" int data_1059de20;
extern "C" int data_105a5040;

extern "C" void *fn_03c216b0(void)
{
  if (data_105a5040 == 0) {
    ListNode *list = &data_1047f164;
    int one = 1;
    data_105a5040 = one;
    fn_03c21620(&data_1059de20);
    fn_0420ce6c(list);
  }
  return &data_1059de20;
}
