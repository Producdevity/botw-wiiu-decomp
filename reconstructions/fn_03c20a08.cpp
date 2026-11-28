extern "C" void fn_03c14cc0(void *);
struct ListNode;
extern "C" void fn_0420ce6c(ListNode* node);
extern "C" struct ListNode data_1047f158;
extern "C" int data_105996b0;
extern "C" int data_105a503c;

extern "C" void *fn_03c20a08(void)
{
  if (data_105a503c == 0) {
    ListNode *list = &data_1047f158;
    int one = 1;
    data_105a503c = one;
    fn_03c14cc0(&data_105996b0);
    fn_0420ce6c(list);
  }
  return &data_105996b0;
}
