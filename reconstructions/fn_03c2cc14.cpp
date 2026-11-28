struct OwnedList;
struct OwnedListNode;
extern "C" void fn_03c0e68c(OwnedList *, OwnedListNode *);

extern "C" void fn_03c2cc14(char* value, OwnedListNode* index) {
    fn_03c0e68c((OwnedList *)(value + 2404), index);
}
