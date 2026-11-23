struct OwnedList;
struct OwnedListNode;
extern "C" void fn_03c0e68c(OwnedList *, OwnedListNode *);
extern "C" void fn_03c1596c(void *, void *);
extern "C" void fn_03c33f74(void*, int);

extern "C" void fn_03c33fe8(void *arg0, void *arg1) {
    fn_03c0e68c((OwnedList *)((char *)arg0 + 0xC), (OwnedListNode *)((char *)arg1 + 0x2FC));
    if (arg1 != 0) {
        fn_03c33f74(arg1, 2);
        fn_03c1596c(arg0, arg1);
    }
}
